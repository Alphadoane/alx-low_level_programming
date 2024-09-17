#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory, or NULL if the allocation fails.
 *If new_size == old_size, return ptr.
 *If new_size == 0 and ptr is not NULL, free(ptr) and return NULL.
 *If ptr is NULL, act like malloc(new_size).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int copy_size;

/* Handle the case where new_size is 0 */
if (new_size == 0)
{
if (ptr != NULL)
{
free(ptr);
}
return (NULL);
}

/* Handle the case where ptr is NULL */
if (ptr == NULL)
{
return (malloc(new_size));
}

/* Handle the case where new_size == old_size */
if (new_size == old_size)
{
return (ptr);
}

/* Allocate new memory block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

/* Determine the size to copy */
copy_size = (old_size < new_size) ? old_size : new_size;

/* Copy data from the old block to the new block */
memcpy(new_ptr, ptr, copy_size);

free(ptr);

return (new_ptr);
}
