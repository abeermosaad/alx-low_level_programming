#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: on success, prints the alphabet, in lowercase
 *         on error, -1 is returned, and errno is set appropriately
 */

void print_alphabet(void)
{

	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;


	}
	_putchar('\n');
}
