#include <stdio.h>
#include "lists.h"

/**
* print_list - print every member of a singly linked list
* @h: pointer to the head
* Return: length of list of type size_t
*/

size_t print_list(const list_t *h)
{
size_t n = 0;
const list_t *ptr = h;
while (ptr != NULL)
{
printf("[%u] %s\n", ptr->str ? ptr->len : 0, ptr->str ? ptr->str : "(nil)");
n++;

ptr = ptr->next;
}
return (n);
}
