#include "holberton.h"

/**
 * *cap_string - capitalize all words of string
 * @s: string to manipulate
 *
 * Return: capitlized string
 */
char *cap_string(char *s)
{
	int i = 0, sep_cnt, in_word = 0;
	char separators[14] = " \t\n,;.!?\"(){}";

	while (s[i] != 0)
	{
		if (s[i] < 'a' || s[i] > 'z')
		{
			sep_cnt = 0;
			while (separators[sep_cnt] != '\0')
			{
				if (s[i] == separators[sep_cnt])
				{
					in_word = 0;
					break;
				}
				else
					in_word = 1;
				sep_cnt++;
			}
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (!in_word)
			{
				s[i] -= 32;
				in_word = 1;
			}
		}
		else
			in_word = 1;
		i++;
	}
	return (s);
}
