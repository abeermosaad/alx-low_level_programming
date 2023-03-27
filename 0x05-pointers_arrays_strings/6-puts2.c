#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 *
 * @str: the parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (int)strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}


