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

	if (str == NULL)
	{
		return (NULL);
	}

	str = malloc(sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	free(str);
	return (str);
}