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

	array = malloc(c * sizeof(size));

	if (array == NULL)
	{
		exit(1);
	}

	free(array);

	return (array);
}
