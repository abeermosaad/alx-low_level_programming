#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	for (i = 1; i <= (int)strlen(s); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' ||
					s[i - 1] == '.' || s[i - 1] == '?'
					|| s[i - 1] == '(' || s[i - 1] == ')'
					|| s[i - 1] == ';' || s[i - 1] == '!' || s[i - 1] == '"'
					i || s[i - 1] == '}' || s[i - 1] == '{' || s[i - 1] == '\n'
					|| s[i - 1] == '\t'))
		{
			s[i] -= 32;
		}

	}
	return (s);
}
