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
	unsigned int i;
	unsigned int len = 0;

	/* check for error case */
	if (!*str)
		return (NULL);

	/* obtain str length */
	while (str[len])
		len++;

	/* allocate memory for str_cpy */
	str_cpy = malloc(sizeof(char) * len);

	if (str_cpy == NULL)
		return (NULL);

	/* copy string */
	i = 0;
	while (i < len)
	{
		str_cpy[i] = str[i];
		i++;
	}
	return (str_cpy);
}
