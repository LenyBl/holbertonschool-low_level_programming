#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string by allocating memory
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	cpy = malloc(sizeof(char) * (strlen(str) + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	strcpy(cpy, str);
	return (cpy);
}