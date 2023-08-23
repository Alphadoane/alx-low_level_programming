#include "main.h"

/**
 * string_toupper - Convert lowercase letters in a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}

return (str);
}
