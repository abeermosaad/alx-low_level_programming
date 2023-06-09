#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: num
 * Return: non :)
 */
void print_binary(unsigned long int n)
{
	int cnt = 0;
	unsigned long int temp, b = 1;

	if (n == 0)
		_putchar('0');
	temp = n;
	while (temp)
	{
		temp = temp >> 1;
		cnt++;
	}
	while (cnt--)
	{
		b = (unsigned long int)(1) << cnt;

		if (b & n)
			_putchar('1');
		else
			_putchar ('0');
		b = 1;
	}
}
