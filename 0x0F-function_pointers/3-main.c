#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main program
 * @argc: number of arguments
 * @argv: array of all arguments
 * Return: Success (0);
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 || strcmp(argv[2], "*") == 0 || strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}	
	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}

