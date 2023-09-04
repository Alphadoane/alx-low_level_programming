#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector (array of strings).
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
return (NULL);

int i;
int j;
int total_length = 0;
char *result;
int index = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
total_length++;
}
total_length++;
}

result = malloc((total_length + 1) * sizeof(char));

if (result == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
result[index++] = av[i][j];
}
result[index++] = '\n';
}

result[index] = '\0';

return (result);
}

