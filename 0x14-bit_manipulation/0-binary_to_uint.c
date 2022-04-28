#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary number to be converted
 * Return: returns the converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int n;
	unsigned int count = 0, mul = 1;

	if (b == NULL)
		return (0);
	while (b[count] != '\0')
	{
		mul *= 2;
		count++;
	}
	mul /= 2;
	for (n = 0; n < count; n++)
	{
		if (!(b[n] == '1' || b[n] == '0'))
			return (0);
		if (b[n] == '1')
			i += (1 * mul);
		mul /= 2;
	}

	return (i);
}
