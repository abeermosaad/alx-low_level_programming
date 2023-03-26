#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase
 *
 * Return: on success, prints the alphabet, in lowercase
 *         on error, -1 is returned, and errno is set appropriately
 */

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;


		}
		_putchar('\n');
		i++;
	}
}

