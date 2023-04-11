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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
