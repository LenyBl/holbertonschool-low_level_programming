#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - fonction renvoie la racine carrée naturelle d'un nombre
 *
 * @n: Nombre
 *
 * Return: La racine carré de n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (n * _sqrt_recursion(n - 1));
}
