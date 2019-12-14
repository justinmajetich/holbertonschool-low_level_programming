#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at nth index
 * @h: head of list
 * @idx: index of insert
 * @n: data for new node
 *
 * Return: pointer to new node, NULL on Failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	if (*h) /* if list exist */
	{
		temp = *h;
		while (i < idx && temp->next) /* navigate to index or end of list */
		{
			temp = temp->next;
			i++;
		}
		if (i == idx) /* if index found */
		{
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = temp;
			if (idx == 0) /* if node added at head */
			{
				new->prev = NULL;
				*h = new;
			}
			else
				new->prev = temp->prev;
			temp->prev = new;
			return (new);
		}
	}
	else
		if (idx == 0) /* if list empty and index is 0 */
			return (add_dnodeint(&(*h), n));

	return (NULL); /* index not found */
}
