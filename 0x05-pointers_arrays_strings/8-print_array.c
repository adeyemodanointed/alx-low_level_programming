#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array, followed by a new line.
 * @a: pointer to an array
 * @n: number of elements to print
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count != n - 1)
			printf(", ");
		count++;
	}
}
