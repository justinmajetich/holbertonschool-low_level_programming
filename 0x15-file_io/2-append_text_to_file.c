#include "holberton.h"
int _strlen(char *s);
/**
 * append_text_to_file - append text to end of file
 * @filename: file to append
 * @text_content: text to append to file
 *
 * Return: 1 on Success, -1 on Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_succ;

	/* guard against NULL filename arg */
	if (!filename)
		return (-1);

	/* open file with write and append flags */
	fd = open(filename, (O_WRONLY | O_APPEND));
	if (fd == -1) /* check for failed open */
		return (-1);

	if (text_content) /* append file, checking for failure */
	{
		write_succ = write(fd, text_content, _strlen(text_content));
		if (write_succ == -1) /* if write fails */
			return (-1);
	}

	/* close file descriptor */
	close(fd);

	return (1);
}
/**
* _strlen - Function that finds the length of a string
* @s: string that the length of is found
*
* Return: length of the @s
*/
int _strlen(char *s)
{
	/* variable to loop through string to get length */
	int len = 0;

	/* Loop through string, checking for null byte */
	while (s[len] != '\0')
		len++;

	/* return length variable once null byte is reached */
	return (len);
}
