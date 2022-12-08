#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to aad in the end of th file:
 * Return: 1 if exited correctly.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY, O_APPEND);

	if (op == -1)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[len])
		len += 1;
		
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
