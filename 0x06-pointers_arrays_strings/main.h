#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
void print_buffer(char *b, int size);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void reverse_array(int *a, int n);
char *_strcat(char *dest, char *src);
#endif
