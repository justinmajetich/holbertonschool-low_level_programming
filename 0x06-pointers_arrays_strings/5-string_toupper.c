#include "holberton.h"

/**
 * *string_toupper - changes lowercase of string to upper
 * @s: string to change
 * Return: pointer to uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
