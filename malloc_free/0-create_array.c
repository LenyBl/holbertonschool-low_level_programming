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
    unsigned int i;

    if (size == 0)
        return (NULL);

    array = malloc(size * sizeof(char));
    if (array == NULL)
    {
        printf("failed to allocate memory\n");
        return (NULL);
    }

    for (i = 0; i < size; i++)
        array[i] = c;

    return (array);
}
