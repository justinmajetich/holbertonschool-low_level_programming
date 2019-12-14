#include "lists.h"
/**
 * add_dnodeint - add new node to head of list
 * @head: head of list
 * @n: node data
 *
 * Return: pointer to new node, NULL on Failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n; /* initialize data */
	new->prev = NULL;
	new->next = *head;
	if (*head) /* only if list already exists */
		(*head)->prev = new;
	*head = new;

	return (*head);
}
