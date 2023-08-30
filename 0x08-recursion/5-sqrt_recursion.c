#include "main.h"

/**
 * sqrt_recursive - helper function for calculating square root recursively.
 * @n: The number for which to find the square root.
 * @x: The current guess for the square root.
 *
 * Description: This function recursively calculates the square root of n.
 *
 * Return: The natural square root of n, or -1 if it doesn't have one.
 */
int sqrt_recursive(int n, int x)
{
if (n < 0)
{
return (-1);
}

if (x * x == n)
{
return (x);
}
else if (x * x > n)
{
return (-1);
}

return (sqrt_recursive(n, x + 1));
}
/*
 * _sqrt_recursion - returns natural square root of a number.
 * @n: the number for which to find the square root.
 *
 * Description: This function calculates the square root of n using recursion.
 *
 * Return : the natural square root of n, or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
return (sqrt_recursive(n, 1));
}
