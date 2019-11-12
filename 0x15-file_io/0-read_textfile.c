#include "holberton.h"

/**
 * read_textfile - reads and prints text to stdout
 * @letters: number of bytes to read/print
 *
 * Return: number of bytes read/printed, 0 if unreadable or !filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, print_cnt;
	char *buffer = malloc(sizeof(char) * letters);

	/* check for NULL arg and malloc fail */
	if (!filename || !buffer)
		return (0);

	/* retrieve file descriptor for opened file */
	fd = open(filename, O_RDONLY);
	if (fd < 0) /* check if open success */
		return (0);
	
	/* read file to buffer, check success */
	if(read(fd, buffer, letters) < 0)
		return (0);

	/* write buffer to stdout, check success */
	print_cnt = write(STDOUT_FILENO, buffer, letters);
	if (print_cnt < 0)
		return (0);

	/* close file descript, check success */
	if (close(fd) < 0)
		return (0);

	/* free memory allocated to buffer */
	free(buffer);

	/* return number of chars printed */
	return (print_cnt);
}
