#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98); /* Terminate the program with status 98 */
}

return (ptr);
}

