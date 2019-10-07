#include "holberton.h"

/**
 * _memcpy - copy memory area
 * @dest: area to copy to
 * @src: area to copy
 * @n: bytes to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
