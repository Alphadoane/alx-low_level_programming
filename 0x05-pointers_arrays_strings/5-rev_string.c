#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: A pointer to a string (null-terminated character array).
 */
void rev_string(char *s)
{
int length = 0;
int i;
char temp;

/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}

/* Reverse the string in-place */
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
