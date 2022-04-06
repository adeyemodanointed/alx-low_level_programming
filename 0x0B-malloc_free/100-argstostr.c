#include "main.h"
#include <stdlib.h>
/**
* argstostr - coverts main arguments to string
* @ac: Number of arguments
* @av: array of arguments
* Return: array of char.
*/
char *argstostr(int ac, char **av)
{
int i, j, count = 0;
char *str;

if (ac == 1 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
printf("%d", i);
for (j = 0; av[i][j] != '\0'; j++)
{
printf("%c", av[i][j]);
count++;
}
}

str = malloc(sizeof(char) * (count + ac));
if (str == NULL)
return (NULL);

count = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[count] = av[i][j];
count++;
}
str[count] = '\n';
count++;
}
return (str);
}}
