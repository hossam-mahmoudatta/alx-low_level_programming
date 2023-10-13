#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _putchar(char c);
int _strlen(char *string);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void *malloc_checked(unsigned int b);
char *string_nconcat(const char *s1, const char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
