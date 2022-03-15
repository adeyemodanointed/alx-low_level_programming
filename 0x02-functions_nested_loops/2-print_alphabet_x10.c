#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
int check = 0;

while (check < 10)
{
int i = 97;
while (i <= 122)
{
_putchar(i);
i++;
}
_putchar('\n');
check++;
}
return;
}
