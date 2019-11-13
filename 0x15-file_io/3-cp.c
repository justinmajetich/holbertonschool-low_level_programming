#include "holberton.h"
void copy_contents(int, char *, int, char *);
/**
 * main - copy content between files
 * @argc: number of args
 * @argv: argument(s)
 *
 * Return: 0 on Success, -1 or exit on Failure
 */
int main(int argc, char **argv)
{
	int f1, f2, close_check;

	/* check arg count */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* open file_from */
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* open file_to */
	f2 = open(argv[2], (O_WRONLY | O_TRUNC | O_CREAT), 00664);
	if (f2 == -1)
	{
		close_check = close(f1);
		if (close_check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* copy contents from old file to new */
	copy_contents(f2, argv[2], f1, argv[1]);

	/* close file descriptors */
	close_check = close(f1);
	if (close_check == -1)
	{
		close_check = close(f2);
		if (close_check == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
			exit(100);
		}
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	close_check = close(f2);
	if (close_check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	return (0);
}
/**
 * copy_contents - read and write to copy
 * @f2: file to read from
 * @filename2: filename
 * @f1: file to write to
 * @filename1: filename
 */
void copy_contents(int f2, char *filename2, int f1, char *filename1)
{
	int write_cnt, read_cnt = 1;
	char buffer[1024];

	while (read_cnt) /* iterate till nothing left to read */
	{
		/* read file_from to buffer */
		read_cnt = read(f1, buffer, 1024);
		if (read_cnt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
			exit(98);
		}

		/* write buffer to file_to */
		write_cnt = write(f2, buffer, read_cnt);
		if (write_cnt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			exit(99);
		}
	}
}
