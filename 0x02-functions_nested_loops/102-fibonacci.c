#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
long i, j, n, mid;
i = 1;
j = 2;

printf("%d, ", i);
printf("%d, ", j);

for (n = 0; n < 48 ; n++)
{
printf("%ld", i + j);
mid = i;
i = j;
j += mid;

if (n < 47)
printf(", ");
}

return (0);
}
