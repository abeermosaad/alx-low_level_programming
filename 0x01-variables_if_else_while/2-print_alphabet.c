#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{

	char a = 'a';

	while (a <= 'z')
	{

		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
