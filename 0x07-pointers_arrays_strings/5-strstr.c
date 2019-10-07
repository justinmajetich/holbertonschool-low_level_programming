#include "holberton.h"

/**
 * _strstr - locate substring
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: pointer to beginning of substring occurance
 */
char *_strstr(char *haystack, char *needle)
{
	int i, match = 0;

	while (*haystack != 0)
	{
		if (*haystack == needle[0])
		{
			for (i = 0; needle[i] != 0;)
			{
				if (haystack[i] == needle[i])
				{
					match = 1;
					i++;
				}
				else
				{
					match = 0;
					break;
				}
			}
			if (match)
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
