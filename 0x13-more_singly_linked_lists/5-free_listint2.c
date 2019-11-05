#include "lists.h"
/**
 * free_listint2 -  free list
 * @head: pointer to struct to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		free(temp);
		*head = (*head)->next;
	}
	head = NULL;
}
