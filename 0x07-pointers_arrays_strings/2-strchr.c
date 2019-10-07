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
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
