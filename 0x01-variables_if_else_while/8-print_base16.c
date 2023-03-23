#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet in lowercase and uppercase
 * Return: Always 0
 */

int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}

	int b = 97;

	while (b <= 102)
	{
		putchar(b);
		b++;

	}
	putchar('\n');
}
