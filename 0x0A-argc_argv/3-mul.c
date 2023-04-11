#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	num1 = atoi(argv[1]), num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}
