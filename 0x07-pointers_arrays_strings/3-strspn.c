#include "holberton.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to compare
 * @accept: string/char to compare against
 *
 * Return: number of matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match = 0, length = 0;

	i = 0;
	while (s[i] != 0)
	{
		for (j = 0; accept[j] != 0; j++)

			/*
			 * if s[i] matches accepted char, increment
			 * length, indicate match, and break loop.
			 * otherwise, indicate no match yet.
			 */

			if (s[i] == accept[j])
			{
				length++;
				match = 1;
				break;
			}
			else
				match = 0;

		/* if no matches for s[i] return length*/
		if (!match)
			return (length);
		i++;
	}
	return (length);
}
