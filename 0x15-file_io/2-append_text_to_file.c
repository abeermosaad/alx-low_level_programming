#include "main.h"
/**
 * append_text_to_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, len = 0;
	ssize_t bytes_written;

	if (!filename)
		return (-1);
	if (text_content)
		len = (int)strlen(text_content);
	op = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (op == -1)
		return (-1);
	if (!text_content)
	{
		close(op);
		return (1);
	}
	bytes_written = write(op, text_content, len);
	close(op);
	if (bytes_written == -1)
		return (-1);
	return (1);
}
