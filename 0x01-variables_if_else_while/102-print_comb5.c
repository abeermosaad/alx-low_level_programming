#include <stdio.h>

/**
 * main - entry point
 * Description:
 * Return: Always 0
 */

int main(void)
{
	int a = 0, b;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar((a / 10) + 48);
			putchar((a % 10) + 48);
			putchar(' ');
			putchar((b / 10) + 48);
			putchar((b % 10) + 48);
			if ((a != 98) || (b != 99))
			{
				putchar(',');
				putchar(' ');
			}

			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);

}
