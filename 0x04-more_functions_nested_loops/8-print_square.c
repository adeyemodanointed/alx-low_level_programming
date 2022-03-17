#include "main.h"
/**
 * print_square - prints square the length of n
 *
 * @size: integer
 * Return: Always void.
 */
void print_square(int size)
{

if (size <= 0)
{
putchar('\n');
}

for (int i = 0; i < size; i++)
{
for (int j = 0; j < size; j++)
{
putchar(35);
}
putchar('\n');
}
return;
}
