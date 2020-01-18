#include "hash_tables.h"
/**
 * hash_table_set - add an element to hash table
 * @ht: hash table to add to
 * @key: key of new element
 * @value: value of new element
 *
 * Return: 1 on Success; 0 on Failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL;

	/* check for NULL/empty key */
	if (!ht || !key || (strlen(key) == 0) || !value)
		return (0);

	/* derive index from key */
	index = hash_djb2((const unsigned char *)key) % ht->size;

	/* create new node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	/* initialize node with value duplicate */
	new->key = strdup((char *)key); /* store key in node */
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value); /* dup value to node */
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index]; /* attach new to head of list at index */
	ht->array[index] = new; /* assign index pointer to new node */

	return (1);
}
