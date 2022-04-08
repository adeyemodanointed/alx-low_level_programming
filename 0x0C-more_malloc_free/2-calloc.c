#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: number of array element
* @size: size of each element
* Return: pointer to allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *mem;

if (nmemb == 0 || size == 0)
return (NULL);

mem = malloc(nmemb * size);
if (mem == NULL)
return (NULL);

return (mem);
}
