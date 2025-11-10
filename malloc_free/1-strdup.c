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
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
		;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		cpy[len] = str[len];
	}
	cpy[len] = '\0';

	return (cpy);
}
