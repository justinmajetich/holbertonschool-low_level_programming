#include "holberton.h"

/**
 * _memset - fill memory with constant byte
 * @s: memory area to fill
 * @b: constant byte
 * @n: bytes to fill
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
