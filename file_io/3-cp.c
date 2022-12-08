#include "main.h"

void closerr(int arg_files);

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: pointer to the argument array.
 * Return: 0 if exited correctly.
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, file_from_r, err;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can´t read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can´t write to %s\n", argv[2]);
		exit(99);
	}
	while (file_from_r >= 1024)
	{
		file_from_r = read(file_from, buff, 1024);
		if (file_from_r == -1)
		{
			dprintf(2, "Error: Can´t read from file %s\n", argv[1]);
			closerr(file_from);
			closerr(file_to);
			exit(98);
		}
		err = write(file_to, buff, file_from_r);
		if (err == -1)
		{
			dprintf(2, "Error: Can´t write to %s\n", argv[2]);
			exit (99);
		}
	}
	closerr(file_from);
	closerr(file_to);
	return (0);
}

/**
 * closerr - close the file with error.
 * @arg_files: argv 1 or 2.
 * Return: 0 if exited correctly.
*/

void closerr(int arg_files)
{
	int close_err;

	close_err = close(arg_files);
	if (close_err == -1)
	{
		dprintf(2, "Error: Can´t close fd %s\n", arg_files);
		exit(100);
	}
}
