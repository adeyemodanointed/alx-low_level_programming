#include "main.h"

/**
 * _atoi - convert sting to an integer.
 * @s: pointer to string
 * Return: return number.
 */
int _atoi(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		printf("%d", a[count]);
		if (count != n - 1)
			printf(", ");
		count++;
	}
	printf("\n");
}
