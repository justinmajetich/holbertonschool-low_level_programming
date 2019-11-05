#include "lists.h"
/**
 * print_listint - print elements of list
 * @h: list to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
