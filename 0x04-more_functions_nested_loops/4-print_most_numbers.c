#include "main.h"

/**
 * print_most_numbers - prints numbers excluding 2 and 4
 *
 * Return: Always void.
 */
void print_most_numbers(void)
{
int i = 48;
while (i <= 57)
{
if (!(i == 50 || i == 52))
{
_putchar(i);
i++;
}
}

_putchar('\n');
return;
}
