#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers in variable argument
 * @n: Unsigned int number of variable argument
 * @separator: the separator between the printed numbers
 * @...: variable argument
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		if (!(*separator))
		printf("%d", va_arg(args, int));
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
