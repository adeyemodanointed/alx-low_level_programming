#include <stdio.h>
#include <stdlib.h>

/**
* main - the main funtion
* @argc: the number of arguments in argv
* @argv: the vector array containing the arguments
* Return: Success is 0.
*/

int main(int argc, char *argv[])
{
if (argc < 3)
{
	printf("Error\n");
	return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
