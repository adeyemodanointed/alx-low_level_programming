#include "main.h"

/**
* _strspn - gets the length of a prefix substring.
* @s: initial segment.
* @accept: accepted bytes.
* Return: the number of accepted bytes.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, bool;

for (i = 0; *(accept + i) != '\0'; i++)
{
bool = 0;
for (j = 0; *(s + j) != '\0'; j++)
{
if (*(s + j) == *(accept + i))
{
bool = 1;
break;
}
}
if (bool == 1)
break;
}
return (++j);
}
