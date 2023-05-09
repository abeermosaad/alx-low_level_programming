#include "main.h"
/**
 * read_textfile - reads a text file and prints it.
 * @letters: the number of letters it should read and print
 * @filename: filename
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, wt, rd;
	char *str;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	str = malloc(sizeof(char) * letters);
	if (!str)
		return (0);
	rd = read(op, str, letters);
	wt = write(1, str, rd);
	close(op);
	if (op == -1 || rd == -1 || wt == -1)
		return (0);
	return (wt);
}
