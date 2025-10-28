#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int c = 0;

	for (c; dest[c]; c++)
		;

	for (i; src[i] != '\0'; i++)
	{
		dest[c] = src[i];
		c++;
	}

	dest[c] = '\0';

	return (dest);
}
