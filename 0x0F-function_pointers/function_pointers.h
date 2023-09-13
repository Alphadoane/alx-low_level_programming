#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A function pointer that defines how the name is printed.
 */
void print_name(char *name, void (*f)(char *));

/**
 * print_uppercase - Prints a name in uppercase.
 * @name: The name to be printed.
 */
void print_uppercase(char *name);

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void);

#endif /* MAIN_H */

