#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;  /* Store the value of a in a temporary variable */
*a = *b;    /* Set the value of a to the value of b */
*b = temp;  /* Set the value of b to the value stored in temp */
}
