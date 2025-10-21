#include "main.h"

int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit > 5)
_putchar(last_digit);
else if (last_digit == 0)
_putchar(last_digit);
else
_putchar(last_digit);
return (0);
}