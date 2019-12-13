#include "lists.h"
/**
 * get_dnodeint_at_index - return data from nth node of list
 * @head: head of list
 * @index: index of node to return
 *
 * Return: nth node on Success, NULL on Failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
