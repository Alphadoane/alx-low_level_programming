#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments into a single string.
 * @ac: The number of arguments.
 * @av: The arguments.
 *
 * Return: A pointer to the new string, or NULL if it fails or ac is 0 or av is NULL.
 */
char *argstostr(int ac, char **av)
{
    char *result;
    int total_len = 0;
    int i, j, k;

    if (ac == 0 || av == NULL)
        return NULL;

    /* Calculate total length required for the new string */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_len++;
        total_len++; /* For newline character */
    }

    /* Allocate memory for the new string */
    result = (char *)malloc((total_len + 1) * sizeof(char)); /* +1 for the null terminator */
    if (result == NULL)
        return NULL;

    /* Copy arguments into the new string */
    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            result[k++] = av[i][j];
        }
        result[k++] = '\n';
    }
    result[k] = '\0'; /* Null-terminate the string */

    return result;
}

