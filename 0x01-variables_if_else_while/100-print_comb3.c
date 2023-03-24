#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet in lowercase and uppercase
 * Return: Always 0
 */

int main(void)
{
	int a = 48, b;

	while (a <= 56)
	{
		b = a + 1;

		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if (a != 56)
			{
				putchar(',');
				putchar(' ');
			}

			b++;

		}

		a++;
	}

	putchar('\n');



}
