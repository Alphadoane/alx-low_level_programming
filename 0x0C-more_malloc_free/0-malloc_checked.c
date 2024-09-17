#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and checks if malloc fails.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory, or exit with status 98 if fails.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}

return (ptr);
} 
