#include "main.h"

/**
 * string_toupper - turn lowercase to uppercase
 *
 * @c: Character array
 * Return: Returns a string
 */
char *string_toupper(char *c)
{
int i = 0;

while (c[i] != '\0')
{
if (c[i] >= 97 && c[i] <= 122)
{
c[i] -= 32;
}
i++;
}
return (c);
}
