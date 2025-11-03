#include "main.h"
/**
 * print_rev_recursion - imprime une chaîne de caractères en ordre inverse
 *
 * @s: pointeur vers la chaîne de caractères à imprimer
 *
 * Return: rien
 */
void print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	print_rev_recursion(s + 1);
	print_rev(*s);
}
