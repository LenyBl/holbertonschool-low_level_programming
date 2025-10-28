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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
