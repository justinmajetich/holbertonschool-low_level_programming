#include "lists.h"
/**
 * insert_nodeint_at_index - insert new node at nth position
 * @head: list to add to
 * @idx: position to insert new node
 * @n: value for new node
 *
 * Return: address of new node on Success, NULL on Fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t new_node;
	listint_t *new = &new_node;
	listint_t *temp;
	unsigned int i = 1;

	/* return NULL, if empty list */
	if (!head)
		return (NULL);

	/* initialize temp pointer to value of head */
	temp = *head;

	/* navigate to index */
	while (i < idx && temp)
	{
		temp = temp->next;
		i++;
	}

	if (i == idx)
	{
		/* allocate for new node */
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);

		/* initialize new node */
		new->n = n;

		/* point new node to old (n + 1)th node */
		new->next = temp->next;

		/* point old nth node to new node */
		temp->next = new;
	}
	else
		return (NULL);

	return (new);
}
