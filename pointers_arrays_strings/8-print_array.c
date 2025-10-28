#include "main.h"
#include <stdio.h>
/**
 * print_array - Fonction qui affiche le nombre de caractère d'une liste
 * avec un nombre de caractère donné
 *
 * @a: Chaine de caractère
 * @n: Nombre de caractère à afficher
 *
 * Return: Rien
 */
void print_array(int *a, int n)
{
	int c;

	int i;

	for (c = 0; str[c] != '\0'; c++)
		;

	for (i = c; i <= n; i++)
	{
		printf(str[i]);
	}
	
	_putchar('\n');
}