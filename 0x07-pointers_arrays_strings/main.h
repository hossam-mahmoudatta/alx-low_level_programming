#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

extern int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *c);
char *cap_string(char *c);
char *leet(char *s);
char *rot13(char *s);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);


#endif
