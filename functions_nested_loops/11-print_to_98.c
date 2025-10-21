#include "main.h"

int print_to_98(int n)
{
if (n > 98)
{
while (n > 98)
{
_putchar((n / 10) + '0');
_putchar(',');
_putchar(' ');
n--;
}
}
else
{
while (n < 98)
{
_putchar((n / 10) + '0');
_putchar(',');
_putchar(' ');
n++;
}
}
_putchar('\n');
return (0);
}
