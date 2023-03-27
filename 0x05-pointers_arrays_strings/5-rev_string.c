#include "main.h"
#include <string.h>

/**
 * rev_string - reverse string, followed by a new line,
 *
 * @s: the parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; i < (int)(strlen(s) / 2); i++)
	{
		char temp;

		temp = s[i];
		s[i] = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = temp;
	}


}
