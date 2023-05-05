#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: num
 * @index: the idx of bit
 * Return: value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cnt = 0;
	int value, flag = 0;

	if (n == 0 && index == 0)
		return (0);
	while (n)
	{
		if (cnt == index)
		{
			if (n & 1)
				value = 1;
			else
				value = 0;
			flag = 1;
			break;
		}
		n = n >> 1;
		cnt++;
	}
	if (!flag)
		return (-1);
	return (value);
}
