#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	char *strdup;

	if (str == NULL)
	{
		return (NULL);
	}

	strdup = malloc(sizeof(char));

	if (strdup == NULL)
	{
		return (NULL);
	}

	strdup = str;

	free(strdup);
	return (strdup);
}