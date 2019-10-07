#include "holberton.h"

/**
 * _strpbrk - search string for set of bytes
 * @s: string to be searched
 * @accept: char(s) to search for
 *
 * Return: matching string byte on Success, 0 on Fail
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s == *(accept + i))
				return (s);
		s++;
	}
	return ('\0');
}
