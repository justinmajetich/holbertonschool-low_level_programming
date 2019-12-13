#include "lists.h"
/**
 * sum_dlistint - sum list data
 * @head: head of list
 *
 * Return: sum of list, 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head)
	{
		temp = head;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	return (0);
}
