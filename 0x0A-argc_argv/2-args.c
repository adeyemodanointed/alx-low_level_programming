#include <stdio.h>

/**
* main - the main funtion
* @argc: the number of arguments in argv
* @argv: the vector array containing the arguments
* Return: Success is 0.
*/

int main(int argc __attribute__((unused)), char *argv[])
{
int i = 0;

while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}

return (0);
}
