#include "main.h"
/**
 * _strchr - fonction qui localise un caractère dans une chaîne
 *
 * @s: Chaîne de caractère
 * @c: Le caractère à chercher
 *
 * Return: Renvoie un pointeur vers la première occurrence du caractère c
 */
char *_strchr(char *s, char c)
{
	int i;
	char strchr;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
		{
			strchr = &s[i];
			return (strchr);
		}
	}

	return (0);
}
