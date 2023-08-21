#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first,
 * followed by a new line.
 * @str: A pointer to a string (null-terminated character array).
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2; /* Move to the next character with a step of 2 */
}

_putchar('\n'); /* Print a newline character */
}
