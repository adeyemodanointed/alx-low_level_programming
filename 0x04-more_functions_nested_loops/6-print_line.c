#include "main.h"
/**
 * print_line - prints line the length of n
 *
 * @n: integer
 * Return: Always void.
 */
void print_line(int n)
{
int j = 0;

while (j < n)
{
if (n == 0)
{
break;
}

_putchar('_');

j++;
}

_putchar('\n');

return;
}
