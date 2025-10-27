#include "../functions_nested_loops/main.h"
/**
 * print_line - fonction qui dessine une ligne
 *
 * @n: number of underline
 *
 * Return: Rien
 */
void print_line(int n)
{
	int j;

	for (j = 0; j <= n; j++)
	{
		if (n != 0)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
