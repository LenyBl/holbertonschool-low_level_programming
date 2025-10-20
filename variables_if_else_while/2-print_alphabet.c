#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 65;
while (ch != ch + 25)
{
putchar(ch);
ch++;
}
return (0);
}
