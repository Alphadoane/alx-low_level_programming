#include "main.h"

/**
 * leet - Encode a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
char *ptr = str;
char *leet_replace = "aAeEoOtTlL";
char *leet_code = "4433007711";

while (*ptr != '\0')
{
int i;

for (i = 0; leet_replace[i] != '\0'; i++)
{
if (*ptr == leet_replace[i])
{
*ptr = leet_code[i];
break;
}
}

ptr++;
}

return (str);
}
