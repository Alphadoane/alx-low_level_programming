#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * This function initializes an integer array, assigns a value to one of its
 * elements, and then uses a pointer to set the value of another integer
 * variable. It prints the value of a specific element in the array.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*p = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
