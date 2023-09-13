#ifndef MAIN_H
#define MAIN_H

#include <stddef.h> 

void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int is_even(int num);

void print_name(char *name, void (*f)(char *));
void print_name_standard(char *name);
void print_element(int element);

#endif /* MAIN_H */

