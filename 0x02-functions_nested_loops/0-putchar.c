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

	for (size_t i = 0; i < strlen(a); i++)
	{
		_putchar(a[i]);
	}

	_putchar('\n');
	return (0);


}
