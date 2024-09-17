#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max inclusive.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, or NULL if min > max or
 *         if malloc fails.
 */
int *array_range(int min, int max)
{
int *array;
int size, i;

/* Check if min > max */
if (min > max)
return (NULL);

/* Calculate size of the array */
size = max - min + 1;

/* Allocate memory */
array = malloc(size * sizeof(int));
if (array == NULL)
return (NULL);

/* Fill the array with values from min to max */
for (i = 0; i < size; i++)
array[i] = min + i;

return (array);
} 
