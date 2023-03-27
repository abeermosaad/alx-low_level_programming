#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints every other character of a string
 *
 * @str: the parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */

void puts_half(char *str)
{
	int i;

	for (i = (int)(strlen(str) / 2); i < (int)strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
