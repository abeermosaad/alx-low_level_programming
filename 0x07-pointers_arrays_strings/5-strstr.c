#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strstr - copies memory area
 *
 * @haystack: pointer to the null-terminated string to be searched.
 *
 * @needle: the string which we will search in
 *
 * Return: on sucess will return pointer to the beginning
 *						of the located substring, or NULL if
 *                      the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, index, index2, flag, n;

	for (j = 0; j < (int)strlen(needle); j++)
	{
		for (i = 0; i < (int)strlen(haystack) ; i++)
		{
			if (needle[j] == haystack[i])
			{
				flag = 1;
				index2 = i;
				index = j;
				break;
			}
		}
		haystack++;
		if (flag == 1)
			break;
	}
	for (n = 0; n < (int)strlen(needle); n++)
	{
		if (needle[index + n] != haystack[index2 + n])
			return (needle);
	}
	return (NULL);
}
