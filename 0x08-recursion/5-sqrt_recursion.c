#include "main.h"
#include <stdio.h>
/**
 * what_sqrt - Finds the natural square root of an inputted number.
 *
 * @num: The number to find the square root of.
 *
 * @root: The root to be tested.
 *
 * Return: square root or -1
 */

int what_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (what_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to return the square root of.
 *
 * Return: n or -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (what_sqrt(n, root));
}
