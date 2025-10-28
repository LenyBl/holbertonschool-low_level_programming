#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Fonction qui copie la chaîne pointée par src
 *
 * @dest: La destination
 * @src:  La source
 *
 * Return: Le pointeur vers dest
 */
char _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < n && src[i] != aq\0aq; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = aq\0aq;

	return (dest);
}
