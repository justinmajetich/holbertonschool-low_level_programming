#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string to append to
 * @src: sring to append
 * Return: pointer to concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int src_i = 0, dest_i = 0;

	for (; dest[dest_i] != '\0';)
		dest_i++;

	for (; src[src_i] != '\0';)
	{
		dest[dest_i] = src[src_i];
		src_i++;
		dest_i++;
	}

	dest[dest_i] = '\0';

	return (dest);
}
