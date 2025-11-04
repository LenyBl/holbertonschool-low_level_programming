#include "main.h"
#include "math.h"
/**
 * _sqrt_recursion - fonction qui renvoie la racine carrée naturelle d'un nombre
 *
 * @n: Nombre
 *
 * Return: La racine carré de n
 */
int _sqrt_recursion(int n)
{
	if (!sqrt(n))
		return (-1);

	if (sqrt(n))
		return (1);

	return (n * sqrt(n - 1))
}
