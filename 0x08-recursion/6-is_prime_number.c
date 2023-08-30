#include "main.h"

/**
 * is_prime_recursive - Helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
if (n <= 1) /* Numbers less than or equal to 1 are not prime.*/
{
return (0);
}

if (divisor == 1) /* If divisor reaches 1, the number is prime.*/
{
return (1);
}

if (n % divisor == 0)
{
return (0);
}

return (is_prime_recursive(n, divisor - 1)); /* Check the next divisor.*/
}

/**
 * is_prime_number - Determines if an integer is a prime number.
 * @n: The integer to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1) /* Numbers less than or equal to 1 are not prime.*/
{
return (0);
}

return (is_prime_recursive(n, n - 1));
}

