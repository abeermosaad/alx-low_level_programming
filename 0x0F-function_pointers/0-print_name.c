#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: the string to print
 * @f: pointer to function
 * Return: on success, print the string
 *         on error, -1 is returned, and errno is set appropriately
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
