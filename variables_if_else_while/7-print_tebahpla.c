#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char number = 57;
while (number > 48)
{
putchar(number);
number--;
}
putchar('\n');
return (0);
}
