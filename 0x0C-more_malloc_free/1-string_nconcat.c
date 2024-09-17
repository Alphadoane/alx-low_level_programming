#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes of the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated space in memory containing the concatenated string,
 *         or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1, len2, i, j;

/* Handle NULL strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate lengths */
len1 = strlen(s1);
len2 = strlen(s2);

/* Use the entire s2 if n is greater than the length of s2 */
if (n >= len2)
n = len2;

/* Allocate memory for concatenated string */
result = malloc(len1 + n + 1);
if (result == NULL)
return NULL;

/* Copy s1 to result */
for (i = 0; s1[i] != '\0'; i++)
result[i] = s1[i];

/* Copy n bytes of s2 to result */
for (j = 0; j < n; j++)
result[i + j] = s2[j];

/* Null-terminate the result */
result[i + j] = '\0';

return result;
}

