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
	int file_a, file_b, wr;
	ssize_t size = 1024;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_a = open(argv[1], O_RDONLY);
	if (file_a == -1);
	{
		dprintf(2, "Error: Can´t read from file %s\n", argv[1]);
		exit(98);
	}
	file_b = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_b == -1)
	{
		dprintf(2, "Error: Can´t write from file %s\n", argv[2]);
		exit(99);
	}
	while (size == 1024)
	{
		size = read(file_a, buff, 1024);
		if (size == -1)
		{
			dprintf(2, "Error: Can´t read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(file_b, buff, size);
		if (wr == -1)
		{
			dprintf(2, "Error: Can´t write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_a) == -1)
	{
		dprinf(2, "Error: Can´t close fd %d\n", file_a);
		exit(100);
	}
	if (close(file_b) == -1)
	{
		dprintf(2, "Error: Can´t close fd %d\n", file_b);
		exit(100);
	}
	return (0);
}
