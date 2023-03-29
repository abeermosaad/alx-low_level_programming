#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * puts_half - prints every other character of a string
 *
 * @str: the parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */

int _atoi(char *s)
{
	int a, b, i;

	for (i = 0; i < strlen(s); i++)
	{
		if (atoi(is[i]) != 0 && atoi(s[i - i]) == 0)
		{
			if (s[i - i] == '-' || s[i - i] == '+')
				a = i - 1;
			else
				a = i;
		
	
		}
		if (atoi(s[i]) != 0 && atoi(s[i + i]) == 0)
		{
			b = i;
			break;
		}
	}
}
