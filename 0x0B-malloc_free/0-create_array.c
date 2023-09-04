#include <stdlib.h>
/**
 * create_array - Creates array and initializes it with specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the allocated array, or NULL if an error occurs
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(size * sizeof(char));

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
