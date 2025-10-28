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

	char *new_str = str;

	for (i = 0; new_str[i] != '\0'; i += 2)
	{
		_putchar(new_str[i]);
	}
	_putchar('\n');
}
