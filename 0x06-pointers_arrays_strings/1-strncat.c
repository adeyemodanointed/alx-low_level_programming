#include "main.h"

/**
 * _strncat - concatenates two strings with a specific byte.
 * @dest: new pointer
 * @src: initial pointer
 * @n: number of bytes to concatenate
 * Return: char *.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int y = 0;
	int count = 0;
	int check;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[y] != '\0')
		y++;
	
	if (n > y)
		check = y;
	else
		check = n;
	while (count < check)
	{
		dest[a + count] = src[count];
		count++;
	}

	if (n < y)
		dest[a + n] = '\0';

	return (dest);
}
