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

	strdup = malloc(str * sizeof(char));

	if (strdup == NULL)
	{
		return (NULL);
	}
	
	strdup = str;

	return (strdup);
}