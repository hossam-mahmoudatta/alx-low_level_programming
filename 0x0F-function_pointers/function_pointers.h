#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

int _strlen(char *string);
void *malloc_checked(unsigned int b);
char* string_nconcat(const char* s1, const char* s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif