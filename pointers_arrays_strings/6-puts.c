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

	for (i = 0; i < str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
