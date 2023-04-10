
#include "main.h"


/**
 * _strspn - copies memory area
 *
 * @s: pointer to the null-terminated string to be searched.
 *
 * @accept: the string which we will search in
 *
 * Return: on sucess will return len.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0, flag;

	for (j = 0; j < (int)strlen(s); j++)
	{
		for (i = 0; i < (int)strlen(accept) ; i++)
		{
			if (s[j] == accept[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			len++;
			flag = 0;
		}
		else
			break;
	}
	return (len);
}
