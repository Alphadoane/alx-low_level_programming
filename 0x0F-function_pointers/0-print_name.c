#include <stdio.h>
/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A function pointer that specifies how to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
/**
 * print_name_standard - A function to print a name in a standard format.
 * @name: The name to be printed.
 */
void print_name_standard(char *name)
{
if (name != NULL)
{
printf("Name: %s\n", name);
}
}

/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
char myName[] = "John";
print_name(myName, print_name_standard);
return (0);
}

