#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
    
if (ptr == NULL)
{
exit(98); // Terminate with status 98 if malloc fails
}

return ptr; // Return the allocated memory pointer
}

