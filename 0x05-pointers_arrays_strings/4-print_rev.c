#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to a string (null-terminated character array).
 */
void print_rev(char *s)
{
int length = 0;

/* Calculate the length of the string */
while (*s != '\0')
{
length++;
s++;
}

/* Move the pointer back to the last character of the string */
s--;

/* Print the string in reverse order */
while (length > 0)
{
_putchar(*s);
s--;
length--;
}

/* Print a newline character */
_putchar('\n');
}
