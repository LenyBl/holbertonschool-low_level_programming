#include "../functions_nested_loops/main.h"
/**
 * print_numbers - affiche les chiffres de 0 à 9
 *
 * Return: rien
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
