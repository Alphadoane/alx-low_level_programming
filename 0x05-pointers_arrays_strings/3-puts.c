#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: A pointer to a string (null-terminated character array).
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
