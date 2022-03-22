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

	while (str[n] != '\0')
	{
	_putchar(str[n]);
	n++;
	}
	_putchar('\n');

}
