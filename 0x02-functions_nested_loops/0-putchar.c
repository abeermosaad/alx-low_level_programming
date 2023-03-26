#include "main.h"

/**
 * main - entry point
 * _putchar: to print one character
 * varible a: paramter for function _putchar
 * Description:
 * Return: Always 0
 */
#include <unistd.h>

/**
 * function _putchar:
 * parameter or member 'a': for function _putchar
 */

int _putchar (char a)
{
	return (write(1, &a, 1));
}
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');
	return (0);


}
