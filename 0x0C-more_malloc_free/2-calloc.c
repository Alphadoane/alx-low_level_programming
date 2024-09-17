#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if allocation fails
 *         or nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size, i;
unsigned char *init_ptr;

/* Handle the case where nmemb or size is 0 */
if (nmemb == 0 || size == 0)
return (NULL);

/* Calculate total size */
total_size = nmemb * size;

/* Allocate memory */
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

/*Initialize memory to zero */
init_ptr = (unsigned char *)ptr;
for (i = 0; i < total_size; i++)
init_ptr[i] = 0;

return (ptr);
} 
