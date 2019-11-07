#include "holberton.h"
/**
 * clear_bit - clears bit value
 * @n: number to manipulate
 * @index: index of bit to clear
 *
 * Return: 1 on Success, -1 on Fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1, test = *n;

	if (index > (sizeof(size_t) * 8))
		return (-1);

	test >>= index;

	if (test & 1)
	{
		/* set mask */
		mask <<= index;

		*n ^= mask;

		return (1);
	}
	else
		return (1);
}
