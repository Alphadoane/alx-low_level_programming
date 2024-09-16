#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
int count = 0, i = 0;

while (str[i] != '\0')
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
count++;
}
i++;
}
return (count);
}

/**
 * allocate_word - Allocates memory for a word and copies the word into it.
 * @str: The string containing the word.
 * @start: The start index of the word in the string.
 * @end: The end index of the word in the string.
 *
 * Return: A pointer to the newly allocated word, or NULL on failure.
 */
char *allocate_word(char *str, int start, int end)
{
char *word;
int i;

word = malloc((end - start + 1) * sizeof(char));
if (word == NULL)
return (NULL);

for (i = 0; start < end; start++, i++)
word[i] = str[start];
word[i] = '\0';

return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
char **words;
int wc, i = 0, k = 0, start, end;

if (str == NULL || *str == '\0')
return (NULL);

wc = word_count(str);
if (wc == 0)
return (NULL);

words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

while (str[i] != '\0')
{
while (str[i] == ' ')
i++;

if (str[i] == '\0')
break;

start = i;
while (str[i] != '\0' && str[i] != ' ')
i++;
end = i;

words[k] = allocate_word(str, start, end);
if (words[k] == NULL)
{
for (i = 0; i < k; i++)
free(words[i]);
free(words);
return (NULL);
}
k++;
}
words[k] = NULL;

return (words);
}
