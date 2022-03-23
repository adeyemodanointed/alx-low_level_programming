#include "main.h"

/**
 * rev_string - prints a string to stdout in reverse
 *
 * @s: pointer to a string
 *
 * Return: Always void.
 */
void rev_string(char *s)
{
int n = 0;
int i;
char temp;

while (*(s + n) != '\0')
{
n++;
}

for (i = 0; i <= (n / 2); i++)
{
temp = s[i];
s[i] = s[n - i];
s[n - i] = temp;
}

for (i = 0; i <= n; i++)
{
temp = s[0];
s[i] = s[i + 1];
}
s[n] = '\0';
}
