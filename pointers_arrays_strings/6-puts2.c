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

	char *new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
	{
		return;
	}

	strcpy(new_str, str);

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
