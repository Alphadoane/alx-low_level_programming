#include <stdio.h>
/**
 * print_name - Prints a name using a provided function.
 * @name: The name to be printed.
 * @f: A function pointer that defines how the name is printed.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}

/**
 * print_uppercase - Prints a name in uppercase.
 * @name: The name to be printed.
 */
void print_uppercase(char *name)
{
while (*name != '\0')
{
putchar(toupper(*name));
name++;
}
putchar('\n');
}
/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
char *myName = "John";
putchar("Original name: %s\n", myName);
putchar_name(myName, print_uppercase);
return (0);
}
