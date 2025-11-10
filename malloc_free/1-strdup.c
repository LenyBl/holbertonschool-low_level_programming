#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	cpy = malloc(sizeof(str) * (strlen(str) + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	return (cpy);
}