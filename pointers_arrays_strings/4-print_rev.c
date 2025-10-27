#include "main.h"
/**
 * print_rev - affiche une chaîne de caractères en ordre inverse
 *
 * @s: pointeur vers la chaîne à afficher
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
