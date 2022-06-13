#include "main.h"

/**
 * _strcpy - prints n elements of an array, followed by a new line.
 * @dest: new pointer
 * @src: initial pointer
 * Return: char *.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';

	return (dest);
}
