#include "lists.h"
/**
 * print_dlistint - print all the elements of a linked list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_cnt = 0;

	while (h) /* iterate till null-terminator */
	{
		printf("%i\n", h->n); /* print node data */
		node_cnt++;
		h = h->next;
	}
	return (node_cnt);
}
