#include "holberton.h"
/**
 * set_bit - set given bit to 1
 * @n: number to manipulate
 * @index: index of target bit
 *
 * Return: 1 on Success, -1 on Fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > (sizeof(size_t) * 8))
		return (-1);

	/* set mask to appropriate index */
	mask <<= index;

	*n |= mask;

	return (1);
}
