#include "lists.h"
/**
 * free_dlistint - free a doubly-linked list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		free(temp);
		head = head->next;
	}
}
