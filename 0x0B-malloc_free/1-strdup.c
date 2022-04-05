#include "main.h"
#include <stdlib.h>
/**
* _strdup - create duplicate of a string
* @str: array of char
*
* Return: pointer to char array.
*/
char *_strdup(char *str)
{
unsigned int i = 0;
unsigned int count;
char *y;

while (str[i] != '\0')
{
i++;
}

y = malloc(sizeof(char) * i);

for (count = 0; count < i; count++)
{
y[count] = str[count];
}

if (y == NULL)
{
return (NULL);
}
return (y);
}
