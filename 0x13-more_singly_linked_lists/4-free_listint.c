#include "lists.h"

/**
* free_listint - free all part of a linked list
* @head: pointer to the head
* Return: void
*/
void free_listint(listint_t *head)
{
listint_t *temp;
temp = head;
while (temp != NULL)
{
head = temp->next;
free(temp);
temp = head;
}
free(temp);
free(head);
}
