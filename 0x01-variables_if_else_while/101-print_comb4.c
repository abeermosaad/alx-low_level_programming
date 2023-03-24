#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet in lowercase and uppercase
 * Return: Always 0
 */

int main(void)
{
	int a = 48, b, c;

	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55)
				{
					putchar(',');
					putchar(' ');
				}
				c++;

			}
			b++
		}

		a++;
	}

	putchar('\n');
	return (0);
}
