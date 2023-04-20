#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_iterator - executes a function given as
 *					a parameter on each element of an array.
 * @action: pointer to the function you need to use
 * @size: the size of the array
 * @array : the array
 * Return: on success, executes a function
 *         on error, -1 is returned, and errno is set appropriately
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return ((ops[i].func));
		i++;
	}
	return (NULL);
}
