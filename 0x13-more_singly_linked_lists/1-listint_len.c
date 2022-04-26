#include <stdio.h>
#include "lists.h"

/**
* listint_len - returns the number of member of a singly linked list
* @h: pointer to the head
* Return: length of list of type size_t
*/

size_t listint_len(const list_t *h)
{
size_t n = 0;
const listint_t *ptr = h;
while (ptr != NULL)
{
n++;

ptr = ptr->next;
}
return (n);
}
