# ifndef SEARCH_ALGOS_H
# define SEARCH_ALGOS_H
#define MIN(i, j) (((i) <= (j)) ? (i) : (j))
#include <stddef.h>
#include <stdio.h>
#include <stddef.h>
#include <math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array1(int *array, size_t start, size_t end);
void print_array(int *array, size_t size);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
#endif
