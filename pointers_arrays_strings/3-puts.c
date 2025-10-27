#include "main.h"
#include "stdio.h"
/**
 * _puts - Affiche une chaine de caractère avec un retour à la ligne
 *
 * @str : Chaine de caractère 
 *
 * Return: Rien
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i[str] != '\0'; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}