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
i = malloc_checked(sizeof(int) * 402);
printf("%p\n", (void *)i);
f = malloc_checked(sizeof(float) * 100000000);
printf("%p\n", (void *)f);
d = malloc_checked(sizeof(double) * 10);
printf("%p\n", (void *)d);
free(c);
free(i);
free(f);
free(d);
}
return (0);
}

