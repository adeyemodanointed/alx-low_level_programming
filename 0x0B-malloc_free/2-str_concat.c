#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenate two strings
* @s1: array of char
* @s2: array of char
* Return: pointer to char array.
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, j = 0;
unsigned int count1, count2;
char *y;

if (!s1 && !s2)
return (NULL);
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;

y = malloc(sizeof(char) * (i + j + 1));
if (y == NULL)
return (NULL);
for (count1 = 0; count1 < i; count1++)
y[count1] = s1[count1];
for (count2 = 0; count2 < j; count2++)
y[count1 + count2] = s2[count2];

return (y);
}
