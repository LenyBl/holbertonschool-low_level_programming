#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 *
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator != NULL)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d%c ", va_arg(args, int), separator);
		}

		printf('\n');
		va_end(args);
	}
}
