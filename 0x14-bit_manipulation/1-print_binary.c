#include "main.h"
/**
 * _pow - calulate the power
 * @num: num
 * @power: the power
 * Return: num
 */
int _pow(int num, int power)
{
	int i;

	if (power == 0)
		return (1);
	if (power == 1)
		return (num);
	i = power - 1;
	while (i--)
	{
		num *= 2;
	}
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num 
 * Return: non
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
