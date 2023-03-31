#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - Encodes a string to 1337.
 *
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{

	char a[8] = {'o', 'l', '>', 'e', 'a', '>', '>', 't'};

	int i, j;

	for (i = 0; i < (int)strlen(s); i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((s[i] == a[j] || (s[i] + 32) == a[j]))
				s[i] = j + 48;

		}
	}
	return (s);
}
