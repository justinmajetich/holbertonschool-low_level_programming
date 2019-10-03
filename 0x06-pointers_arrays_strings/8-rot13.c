#include "holberton.h"

/**
 * *rot13 - encode string to rot13
 * @s: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int str_cnt = 0, al_cnt;
	char alpha[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_alpha[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[str_cnt] != 0)
	{
		for (al_cnt = 0; al_cnt < 52;)
		{
			if (s[str_cnt] == alpha[al_cnt])
			{
				s[str_cnt] = rot_alpha[al_cnt];
				break;
			}
			al_cnt++;
		}
		str_cnt++;
	}
	return (s);
}
