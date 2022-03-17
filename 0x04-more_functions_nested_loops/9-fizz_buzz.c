#include <stdio.h>

/**
 * main - fizzbuzz program
 *
 * Return: 0 for Success
 */
int main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
    
}

return (0);
}
