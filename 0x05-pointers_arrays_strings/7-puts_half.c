#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: A pointer to a string (null-terminated character array).
 */
void puts_half(char *str)
{
int length = 0;
int start;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Calculate the starting position for printing the second half */
if (length % 2 == 0)
{
start = length / 2;
}
else
{
start = (length - 1) / 2;
}

/* Print the second half of the string */
while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n'); /* Print a newline character */
}
