#include "main.h"

/**
 * swap_int - swaps two variables
 *
 * @a: pointer to a variable a
 * @b: pointer to a variable b
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int m;
	int n;

	m = *a;
	n = *b;
	*a = n;
	*b = m;
}
