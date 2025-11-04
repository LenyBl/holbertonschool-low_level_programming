#include "main.h"
/**
 * factorial - fonction qui retourne le facteur d'un nombre donné
 *
 * @n: Nombre
 *
 * Return: 0 si n est au dessus de 0 sinon -1
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (1 + factorial(n));
	}
	else
	{
		return (-1 + factorial(n));
	}
}
