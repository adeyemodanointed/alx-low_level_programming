#include "main.h"

/**
 * print_rev - prints a string to stdout in reverse
 *
 * @s: pointer to a string
 *
 * Return: Always void.
 */

void print_rev(char *s)
{
	int n = 0;
	int i;

	while (*(str + n) != '\0')
	{
	n++;
	}

	for (i = n; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
