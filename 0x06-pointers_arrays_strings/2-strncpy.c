#include "holberton.h"

/**
 * *_strncpy - copies n bytes of src to dest string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes of src to copy
 *
 * Return: string copied to i.e dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		if (src[i] == 0)
			break;
		dest[i] = src[i];
		i++;
	}
	while (i <= n - 1)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
