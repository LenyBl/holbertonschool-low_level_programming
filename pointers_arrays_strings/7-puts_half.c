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

	if (str <= 0)
	{
		_putchar('\n');
	}

	for (c = 0; str[c] != '\0'; c++)
		;

	for (i = c / 2; i <= c; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
