#include "main.h"

/**
 * _strcat - concatenates to strings.
 * @dest: new pointer
 * @src: initial pointer
 * Return: char *.
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int y = 0;
	int count = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[y] != '\0')
		y++;

	while (count < y)
	{
		dest[n + count] = src[count];
		count++;
	}
	dest[n + y - 1] = '\0';

	return (dest);
}
