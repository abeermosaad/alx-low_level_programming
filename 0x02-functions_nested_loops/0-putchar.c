#include "main.h"
#include <unistd.h>

/**
 * main - entry point
 * Description:
 * Return: Always 0
 */

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
int _putchar (char a)
{
	return (write(1, &a, 1));
}
