#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
long i, j, n, mid, sum;
i = 1;
j = 2;
sum = 3;

for (n = 0; n < 48 ; n++)
{
if (i + j < 4000000)
{
if ((i + j) % 2 == 0)
{
sum += (i + j);
}
}
else
{
break;
}
mid = i;
i = j;
j += mid;
}

printf("%ld\n", sum);

return (0);
}
