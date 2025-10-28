#include "main.h"
/**
 * puts2 - Affiche une chaine de caractère en affichant un caractère sur deux
 *
 * @str : Chaine de caractère
 *
 * Return: Rien
 */
void puts2(char *str)
{
	int i;

	int c;

	for (c = 0; str[c] != '\0'; c++)
		;

	for (i = 0; i >= c; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}

