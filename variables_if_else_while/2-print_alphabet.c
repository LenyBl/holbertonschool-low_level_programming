#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch != 'z' + 1)
{
putchar(ch);
ch++;
}
return (0);
}
