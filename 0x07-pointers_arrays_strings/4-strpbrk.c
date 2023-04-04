#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - copies memory area
 *
 * @s: pointer to the null-terminated string to be searched.
 *
 * @accept: the string which we will search in
 *
 * Return: on sucess will return len.
*/
char *_strpbrk(char *s, char *accept)
{
    int i, j;

	for (j = 0; j < (int)strlen(s); j++)
	{
		for (i = 0; i < (int)strlen(accept) ; i++)
		{
			if (s[j] == accept[i])
			{
				s++;
                return (s);
			}
		}
        s++;
    }
    return (NULL);
}
