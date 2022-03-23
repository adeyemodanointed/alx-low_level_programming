#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
int count = 0;
int n = 0;

while (str[count] != '\0')
count++;

if (count % 2 == 0)
n = count / 2;
else
n = (count / 2) - 1;

while (n < count)
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}

