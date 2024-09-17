#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the program exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98); /* Terminate the program with status 98 */
}

int main(void)
{
char *c;
int *i;
float *f;
double *d;

c = malloc_checked(sizeof(char) * 1024);
printf("%p\n", (void *)c);
i = malloc_check
return (0);
}

