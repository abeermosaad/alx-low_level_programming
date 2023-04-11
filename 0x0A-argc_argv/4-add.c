#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}
