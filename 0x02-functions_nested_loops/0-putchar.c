#include "main.h"

/**
 * main - entry point
 * Description:
 * Return: Always 0
 */
#include <unistd.h>

int _putchar (char a)
{
        return (write(1, &a, 1));
}
int main(void)
{
	char a[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');
	return (0);


}
