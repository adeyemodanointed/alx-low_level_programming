#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenate string to n length
* @s1: First string
* @s2: Second string
* @n: length to copy
* Return: pointer to the concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int count1, count2, count;
char *check;
unsigned int i;

for (count1 = 0; s1[count1] != '\0'; count1++)
	;
for (count2 = 0; s2[count2] != '\0'; count2++)
	;

if (!n)
count = count1;
else if (n >= count2)
count = count1 + count2;
else
count = count1 + n;

check = malloc(sizeof(char) * (count + 1));
if (check == NULL)
return (NULL);

for (i = 0; i < count1; i++)
check[i] = s1[i];

if (n > 0)
{
for (i = count1 ; i < count; i++)
check[i] = s2[i - count1];
}
check[i] = '\0';

return (check);
}
