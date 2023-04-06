#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints a string in reverse
 *
 * @s: the string
 *
 * Return: prints the string in reverse.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 +  _strlen_recursion(s + 1));
}
