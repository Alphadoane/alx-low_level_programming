#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int len, i;

if (str == NULL)
return (NULL);

for (len = 0; str[len] != '\0'; len++)
;

duplicate = malloc((len + 1) * sizeof(char));

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= len; i++)
duplicate[i] = str[i];

return (duplicate);
}
