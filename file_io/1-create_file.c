#include "main.h"

/**
 * create_file - creates a file.
 * @filename: pointer to the name of the file.
 * @text_content: pointer to the content of the new file.
 * Return: 1 if exited correctly.
*/

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		for (len = 0; text_content[len];)
			len += 1;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
