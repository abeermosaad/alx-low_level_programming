#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: the string
 *
 * Return: prints the string in reverse.
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
