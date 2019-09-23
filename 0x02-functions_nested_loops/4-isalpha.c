#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 *
 * Description: Determines whether of not a
 * character is alphabetic by running it through
 * multiple conditionals via an if else statement.
 * Return: 1 on success, 0 on failure
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
