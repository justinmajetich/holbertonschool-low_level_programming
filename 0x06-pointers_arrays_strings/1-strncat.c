#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @dest: string to add to
 * @src: string to add
 * @n: number of consecutive byte to cat from src
 *
 * Description: concatenates two strings, up to
 * the nth element of src string.
 * Return: pointer to cat string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_i = 0, src_i = 0;

	while (dest[dest_i] != 0)
		dest_i++;
	while (src_i <= n - 1)
	{
		if (src[src_i] == '\0')
			break;
		dest[dest_i] = src[src_i];
		src_i++;
		dest_i++;
	}
	dest[dest_i] = '\0';

	return (dest);
}
