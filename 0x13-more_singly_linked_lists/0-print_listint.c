#include "lists.h"

/**
* print_listint - print every member of a singly linked list
* @h: pointer to the head
* Return: length of list of type size_t
*/

size_t print_listint(const listint_t *h)
{
size_t n = 0;
const listint_t *ptr = h;
while (ptr != NULL)
{
printf("%d\n", ptr->n);
n++;

ptr = ptr->next;
}

return (n);
}
