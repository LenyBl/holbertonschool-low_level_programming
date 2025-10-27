#include "main.h"
/**
 * print_rev - Afficher une chaine de caractère inversé
 *
 * @s: Chaine de caractère
 *
 * Return: Retourne rien
 */
void print_rev(char *s)
{
	int num = _strlen(s);
	int i;

	for (i = num; i <= 0; i--)
	{
		_puts(s[i]);
	}
}
