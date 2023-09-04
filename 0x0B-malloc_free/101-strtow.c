#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words) or NULL on failure.
 */
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int i, j, k, word_count = 0;
char **words;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
word_count++;
}
if (word_count == 0)
return (NULL);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
j = 0;
while (str[i] != '\0')
{
while (str[i] == ' ')
i++;
k = i;
while (str[i] != ' ' && str[i] != '\0')
i++;
int word_length = i - k;
words[j] = malloc((word_length + 1) * sizeof(char));
if (words[j] == NULL)
{
for (i = 0; i < j; i++)
free(words[i]);
free(words);
return (NULL);
}
strncpy(words[j], &str[k], word_length);
words[j][word_length] = '\0';
j++;
}
words[j] = NULL;
return (words);
}
