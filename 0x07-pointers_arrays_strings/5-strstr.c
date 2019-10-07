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
	int i, hay_cnt, match = 0;

	/* loop through haystack string */
	for (hay_cnt = 0; haystack[hay_cnt] != '\0'; hay_cnt++)
	{
		if (haystack[hay_cnt] == needle[0])
		{
			for (i = 0; needle[i] != '\0';)
			{
				/* comparing haystack to needle sequence */
				if (haystack[hay_cnt + i] == needle[i])
				{
					match = 1;
				}
				else
				{
					match = 0;
					break;
				}
				i++;
			}
			if (match)
				return ((haystack + hay_cnt));
		}
	}
	if (needle[0] == '\0')
		return (haystack + hay_cnt);
	return ('\0');
}
