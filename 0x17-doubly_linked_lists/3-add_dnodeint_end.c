#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: head of list
 * @n: node data
 *
 * Return: pointer to new node, NULL on fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n; /* set node data */
	new->next = NULL;

	temp = *head;
	if (temp) /* if list exists */
	{
		while (temp->next) /* position temp at end of list */
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		new->prev = NULL;
		*head = new; /* new is head, if only node */
	}
	return (new);
}
