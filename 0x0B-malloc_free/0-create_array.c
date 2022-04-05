#include "main.h"
/**
* create_array - create an array of similar character
* @c: the character
* @size: the size of the array to print
*
* Return: pointer to char array.
*/
char *create_array(unsigned int size, char c)
{
int i;
char *y;

if (size == 0)
{
return (NULL);
}
y = malloc(sizeof(c) * size);

if (y == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
y[i] = c;
}

return (y);
}
