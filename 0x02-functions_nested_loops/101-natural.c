#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 within 1-1024
 *
 * Return: 0
 */

int main(void)
{
int i, j;
j = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
j += i;
}
}
printf("%d", j);
return (0);
}
