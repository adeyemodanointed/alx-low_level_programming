#include "main.h"

/**
* rot13 - Generate rot code
*
* @s: String
* Return: Returns a string
*/
char *rot13(char *s)
{
char first[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char second[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, n = 0;

while (s[n] != '\0')
{
for (i = 0; i < 52; i++)
{
if (s[n] == first[i])
{
s[n] = second[i];
break;
}
}
n++;
}

return (s);

}
