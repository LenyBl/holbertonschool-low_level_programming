#include "main.h"
/**
 * print_sign - Affiche le signe d'un nombre
 * @n: Le nombre à tester
 *
 * Return: 1 si n est positif, 0 si n est nul, -1 si n est négatif
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
_putchar(',');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar(48);
_putchar(',');
_putchar(' ');
return (0);
}
else
{
_putchar(45);
_putchar(',');
_putchar(' ');
return (-1);
}
}
