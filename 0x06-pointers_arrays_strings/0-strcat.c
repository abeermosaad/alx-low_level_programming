#include "main.h"
#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
	char *a;
	int i;

	for (i = 0; i <= (int)strlen(dest); i++)
	{
		*a++ = dest[i];
	
	}
	for (i = 0; i <= (int)strlen(src); i++)
        {
                *a++ = src[i];

        }
	return (a);
}
