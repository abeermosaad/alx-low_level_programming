#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: the num
 *
 * @y: the power
 *
 * Return: the result
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (x == 1)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, --y));

}
