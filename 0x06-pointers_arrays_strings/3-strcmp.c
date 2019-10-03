#include "holberton.h"

/**
 * _strcmp - compare strings
 * @s1: string to compare
 * @s2: string to compare against
 *
 * Return: -15 if s1 is lesser, 15 if greater, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != 0)
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != 0)
		return (s1[i] - s2[i]);
	return (0);
}
