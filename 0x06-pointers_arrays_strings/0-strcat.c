#include "main.h"
#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
	int i;

	int end = (int)strlen(dest);
        

	while (src[i] != '\0')
	{
		dest[end + i] = src[i];
		i++;
	}	
	return (dest);
}
