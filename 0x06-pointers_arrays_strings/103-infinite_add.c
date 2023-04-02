#include "main.h"
#include <string.h>
#include <stdlib.h>
char *infinite_add(char *n1, char *n2, char *r, int size_r){
    long  res = atoi(n1) + atoi (n2);
    int cnt = 0;
    int res2 = res;
     while (res != 0) {
          cnt++;
        res /= 10;
     }
    cnt++;
    if (cnt <= size_r){
	    int i;
        for(i = cnt - 2; i >= 0; i--)
        {
            r[i]= (res2 % 10) + '0';
            res2 /= 10;
        }
        return (r);
    }
    else
        return(0);
}
