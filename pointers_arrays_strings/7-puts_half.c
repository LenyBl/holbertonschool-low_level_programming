#include "main.h"
/**
 * puts_half - Affiche la seconde moitié de la chaine
 *
 * @str: Chaine de caractère
 *
 * Return: Rien
 */
void puts_half(char *str)
{
	int c;

	int i;

	for (c = 0; str[c] != '\0'; c++)
		;

	if (str[c] <= 0)
	{
		_putchar('\n');
	}

	for (i = (c + 1) / 2; i <= c - 1 ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
