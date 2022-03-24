#include "main.h"

/**
* leet - Generate leet
*
* @s: String
* Return: Returns a string
*/
char *leet(char *s)
{
char lower[5] = {'a', 'e', 'o', 't', 'l'};
char upper[5] = {'A', 'E', 'O', 'T', 'L'};
char leet[5] = {'4', '3', '0', '7', '1'};
int i, n = 0;

while (s[n] != '\0')
{
for (i = 0; i < 5; i++)
{
if (s[n] == upper[i] || s[n] == lower[i])
s[n] = leet[i];
}
n++;
}

return (s);

}
