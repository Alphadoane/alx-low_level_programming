#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Check if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if it's a separator, false otherwise.
 */
bool is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (true);
}
return (false);
}

/**
 * cap_string - Capitalize all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i;
bool new_word = true;

for (i = 0; str[i] != '\0'; i++)
{
if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 'a' - 'A';
new_word = false;
}
else if (is_separator(str[i]))
{
new_word = true;
}
else
{
new_word = false;
}
}

return (str);
}
