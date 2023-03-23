#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet in lowercase and uppercase
 * Return: Always 0
 */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);

}
