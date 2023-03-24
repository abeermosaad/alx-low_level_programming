#include <stdio.h>

/**
 * main - entry point
 * Description: print the alphabet in lowercase and uppercase
 * Return: Always 0
 */

int main(void)
{
	int a = 48, b, c, d;

	while (a <= 57)
	{
		b = a;
		while (b < 57)
		{
			c = b;
			while (c <= 57)
			{
				d = c + 1;
				while (d <= 57)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (b != 58)
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				c++;
			}
			b++;
		}

		a++;
	}
	putchar('\n');
	return (0);

}
