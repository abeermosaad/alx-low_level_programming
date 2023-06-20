#include "main.h"

/**
 * _puts - prints a string, followed by a new line,
 *
 * @str: the character to write
 *
 * Return: on success, the number of characters written
 *         on error, -1 is returned, and errno is set appropriately
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{

		_putchar(str[i]);
		i++;

	}
	_putchar('\n');

}
