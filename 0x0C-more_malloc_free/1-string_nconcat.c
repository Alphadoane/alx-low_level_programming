#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings with a limit on the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters to concatenate from s2.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If memory allocation fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2;
char *result;
unsigned int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
n = len2;

result = malloc(len1 + n + 1);

if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (j = 0; j < n; j++
result[i++] = s2[j];

result[i] = '\0';

return (result);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[] = "Hello, ";
char s2[] = "world!";
char *concatenated = string_nconcat(s1, s2, 6);

if (concatenated != NULL)
{
printf("Concatenated: %s\n", concatenated);
free(concatenated);
}
else
{
printf("Memory allocation failed.\n");
}

return (0);
}
