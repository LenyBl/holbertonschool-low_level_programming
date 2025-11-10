#include <stdlib.h>
#include <stdio.h>
/**
 * *create_array - créer une liste de char
 *
 * @size: taille de la liste
 * @c: caractère
 *
 * Return: Liste de caractère
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(size * sizeof(char));

	if (size == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
