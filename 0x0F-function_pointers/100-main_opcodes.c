#include <stdio.h>
#include <stdlib.h>

/**
 * main - func
 * @argc: cnt
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *op = (char *) main;
	int i, bytesnum;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytesnum = atoi(argv[1]);

	if (bytesnum < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytesnum; i++)
	{
		printf("%02x", op[i] & 0xFF);
		if (i != bytesnum - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
