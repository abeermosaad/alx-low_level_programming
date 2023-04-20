#ifndef CALC_H
#define CALC_H
#include <stdio.h>
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int (*get_op_func(char *s))(int, int);
typedef struct
{
	char *op;
	int (*func)(int, int);

}op_t;

#endif
