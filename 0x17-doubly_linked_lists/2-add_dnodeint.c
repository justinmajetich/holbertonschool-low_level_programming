#include "lists.h"
/**
 * add_dnodeint - add new node to head of list
 * @head: head of list
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

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
