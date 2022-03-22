#include "main.h"

/**
 * rev_string - prints a string to stdout in reverse
 *
 * @s: pointer to a string
 *
 * Return: Always void.
 */

void rev_string(char *s)
{
	int n = 0;
	int i;

	while (*(s + n) != '\0')
	{
	n++;
	}

	char p[n];
	for (i = n - 1; i >= 0; i--)
	{
		s[i] = p[n - i + 1];
	}
	
	_putchar('\n');

}
