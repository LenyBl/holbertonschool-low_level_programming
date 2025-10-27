#include "../functions_nested_loops/main.h"
/**
 * print_triangle - Dessine un triangle
 *
 * @size: Taille du triangle
 *
 * Return: Rien
 */
void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= size; i++)
	{
		int j;
		int k;

		for (j = size - 1; j >= 0; j--)
		{
			_putchar(' ');
		}

		for (k = 1; k <= size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
