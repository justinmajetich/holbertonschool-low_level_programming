#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *str_cpy;
	unsigned int len = 0;

	/* check for error case */
	if (!*str)
		return (NULL);

	/* obtain str length */
	while (str[len])
		len++;

	/* allocate memory for str_cpy */
	str_cpy = malloc(sizeof(char) * len);

	/* copy string */
	while (len)
	{
		str_cpy[len - 1] = str[len - 1];
		len--;
	}
	return (str_cpy);
}
