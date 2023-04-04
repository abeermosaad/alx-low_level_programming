#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strchr - copies memory area
 *
 * @s: pointer to the null-terminated string to be searched.
 *
 * @c: the character to be located.
 *
 * Return: on sucess will return s.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < (int)strlen(s); i++)
	{
		
		if (s[i] == c)
		{   
            s++;
			return (s);
		}
        s++;
        
	}
	return (NULL);

}
