#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - prints the name
 * @argc:  counter
 * @argv:  arr
 * Return: .
 */

int main(int argc, char *argv[])
{
	int num1, num2, (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (((argv[2][0] == '/') || (argv[2][0] == '%')) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", p(num1, num2));
	return (0);
}
