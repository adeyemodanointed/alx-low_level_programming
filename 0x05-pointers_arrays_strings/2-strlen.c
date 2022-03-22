#include "main.h"

/**
 * _strlen - Gets the length of a string
 *
 * @s: pointer to a string
 *
 * Return: Always length of string.
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	return (n);
}
