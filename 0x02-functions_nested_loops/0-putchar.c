#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * main - entry point
 * Description:
 * Return: Always 0
 */

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
