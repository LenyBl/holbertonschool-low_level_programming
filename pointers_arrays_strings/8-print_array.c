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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	_putchar('\n');
}
