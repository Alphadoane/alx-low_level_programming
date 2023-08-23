#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: An array of integers.
 * @n: The number of elements in the array.
 *
 * Return: Nothing (void).
 */
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{

temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
