#include "main.h"
#include <stdlib.h>


/**
* malloc_checked - checks if malloc is successful or exits
* @b: unsigned value
* Return: void
*/

void *malloc_checked(unsigned int b)
{
int *check;

check = malloc(sizeof(b));
if (!check)
{
exit(98);
}

return (check);
}
