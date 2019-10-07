#include "holberton.h"

/**
 * _strchr - locates character in string
 * @s: string to parse
 * @c: character to locate
 *
 * Return: pointer to first occurence of character, NULL on fail
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((s + i));
		i++;
	}
	return ('\0');
}
