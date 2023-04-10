#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: parameter
 *
 * @s2: parameter
 *
 * Return: on success,
 *         on error, -1 is returned, and errno is set appropriately
 */

int _strcmp(char *s1, char *s2)
{
	int i, result, end1 = (int)strlen(s1);

	for (i = 0; s1[i] && s2[i] && i < end1; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			return (result);

		}

	}
	return (0);

}
