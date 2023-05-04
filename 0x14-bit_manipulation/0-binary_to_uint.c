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
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary num
 * Return:  the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, res, cnt = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < (int)strlen(b); i++)
	{
		if (b[i] == '0' || b[i] == '1')
			continue;
		else
			return (0);
	}
	res = 0;
	for (i = (int)strlen(b) - 1; i >= 0; i--)
	{
		res += (b[i] - '0') * (_pow(2, cnt++));
	}
	return (res);
}
