#include "holberton.h"
/**
 * get_endianness - determine big/little endian machine
 *
 * Return: 1 if Little Endian, 0 if Big Endian
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	else
		return (0);
}
