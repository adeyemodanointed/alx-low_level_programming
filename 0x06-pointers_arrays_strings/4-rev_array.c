#include "main.h"

/**
 * reverse_array - prints an array in reverse
 *
 * @a: pointer to an array
 * @n: length of array
 * Return: Always void.
 */
void reverse_array(char *a, int n)
{
int i;
int temp;
n--;

printf("n: %d\n", n);

for (i = 0; i <= (n / 2) - 1; i++)
{
temp = a[i];
a[i] = a[n - i];
a[n - i] = temp;
}
}
