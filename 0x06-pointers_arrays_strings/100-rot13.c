#include "main.h"

/**
 * rot13 - Encode a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
char *ptr = str;
char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *lower = "abcdefghijklmnopqrstuvwxyz";
char *rot13_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";
char *rot13_lower = "nopqrstuvwxyzabcdefghijklm";

while (*ptr != '\0')
{
int i;

if ((*ptr >= 'A' && *ptr <= 'Z') || (*ptr >= 'a' && *ptr <= 'z'))
{
char *charset = (*ptr >= 'A' && *ptr <= 'Z') ? upper : lower;
char *rot13_charset = (*ptr >= 'A' && *ptr <= 'Z') ? rot13_upper : rot13_lower;

for (i = 0; charset[i] != '\0'; i++)
{
if (*ptr == charset[i])
{
*ptr = rot13_charset[i];
break;
}
}
}

ptr++;
}

return (str);
}
