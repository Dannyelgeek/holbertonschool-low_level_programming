#include "main.h"

int closerr(int error, char *s, int file_d);
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: pointer to the argument array.
 * Return: 0 if exited correctly.
*/

int main(int argc, char *argv[])
{
	int file_a, file_b, re, wr;
	char buff[1024];

	if (argc != 3)
		closerr(97, NULL, 0);

	file_b = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_b == -1)
		closerr(99, argv[2], 0);

	file_a = open(argv[1], O_RDONLY);
	if (file_a == -1)
		closerr(98, argv[1], 0);

	while ((re = read(file_a, buff, 1024)) != 0)
	{
		if (re == -1)
			closerr(98, argv[1], 0);

		wr = write(file_b, buff, re);
		if (wr == -1)
			closerr(99, argv[2], 0);
	}
	close(file_b) == -1 ? (closerr(100, NULL, file_b)) : close(file_b);
	close(file_a) == -1 ? (closerr(100, NULL, file_a)) : close(file_a);
	return (0);
}

/**
 * closerr - close the file with error.
 * @error: exit value.
 * @s: name of the files.
 * @file_d: file descriptor
 * Return: 0 if exited correctly.
*/

int closerr(int error, char *s, int file_d)
{
	switch (error)
	{
		case 97:
			dprintf(2, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(1 | 2, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(2, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(2, "Error: Can't close fd %d\n", file_d);
			exit(error);
		default:
			return (0);
	}
}
