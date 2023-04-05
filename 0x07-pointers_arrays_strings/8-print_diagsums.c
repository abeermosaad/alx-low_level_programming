#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard.v
 *
 * @a: parameter
 *
 * Return: prints the chessboard.
*/
void print_diagsums(int *a, int size)
{
    int sum1 = 0, sum2 = 0, i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
                sum1 += a[i][j];
            if ((i + j) == (size - 1))
                sum2 += a[i][j];
        }   
    }
    printf("%d, %d\n",sum1 ,sum2);
    
}
