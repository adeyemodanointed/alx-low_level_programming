#include "main.h"
/**
 * print_diagonal - prints diagonal the length of n
 *
 * @n: integer
 * Return: Always void.
 */
void print_diagonal(int n)
{

if (n <= 0)
{
_putchar('\n');
return;
}

for (int i = 0; i < n; i++)
{
int j = 0;

while (j < i)
{
_putchar(' ');
j++;
}
_putchar(92);
_putchar('\n');
}
return;
}