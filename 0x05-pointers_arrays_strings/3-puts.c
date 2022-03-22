#include "main.h"

/**
 * _puts- prints a string to stdout
 *
 * @str: pointer to a string
 *
 * Return: Always length of string.
 */

void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		n++;
	}

	int i;

	for (i = 0; i < n; i++)
	{
	_putchar(*(str + n));
	}
	_putchar('\n');

}
