#include "main.h"
/**
 * more_numbers - prints 1 - 14 10 times
 *
 * Return: Always void.
 */
void more_numbers(void)
{
int j = 0;

while (j < 10)
{
int i = 0;

while (i <= 14)
{
if (i > 9)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
i++;
}

_putchar('\n');
j++;
}
return;
}
