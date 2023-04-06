#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 
 *
 * @s: the string
 *
 * Return: 0 or 1
*/
int is_palindrome(char *s)
{
	long i, flag = 1;

	for (i = 0; i < ((int)strlen(s) / 2); i++)
	{
		if (s[i] != s[(int)strlen(s) - 1 - i])
		{
			flag = 0;
			break;
		}
	}
	if (flag)
		return (flag);
	else
		return (flag);
}
