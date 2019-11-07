#include "holberton.h"
/**
 * get_bit - return value of given bit
 * @n: number to parse
 * @index: index of bit to check
 *
 * Return: value of bit at index, -1 on Fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	if (n & 1)
		return (1);
	else
		return (0);
}
