#include "lists.h"

/**
* free_list - free all part of a linked list
* @head: pointer to the head
* Return: void
*/
void free_list(list_t *head)
{
list_t *ptr;
list_t *temp;
ptr = head;

while (ptr->next != NULL)
{
temp = ptr->next;
free(ptr);
ptr = temp;
}
free(temp);
}
