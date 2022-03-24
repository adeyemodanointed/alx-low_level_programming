#include "main.h"

/**
 * _strncpy - prints n elements of an array, followed by a new line.
 * @dest: new pointer
 * @src: initial pointer
 * @n: character count
 * Return: char *.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, dCount = 0, sCount = 0;

while (dest[dCount] != '\0')
dCount++;
while (src[sCount] != '\0')
sCount++;
if (n < sCount)
{
while (i < n)
{
dest[i] = src[i];
i++;
}
}
else
{
while (i < sCount)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
dest = src;
}

return (dest);
}
