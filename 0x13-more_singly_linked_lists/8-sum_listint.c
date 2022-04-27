#include "lists.h"

/**
* sum_listint - sums up every member of a singly linked list
* @head: pointer to the head
* Return: sum of list of type int
*/

int sum_listint(listint_t *head)
{
int n = 0;
listint_t *ptr = head;

while (ptr != NULL)
{
n += ptr->n;
ptr = ptr->next;
}

return (n);
}
