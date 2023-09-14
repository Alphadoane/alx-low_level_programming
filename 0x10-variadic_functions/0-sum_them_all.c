#include <stdarg.h>
/*
 * This function calculates the sum of all its integer parameters.
 *
 * Parameters:
 *   n: The number of integer parameters to sum.
 *   ...: A variable number of integer parameters to be summed.
 *
 * Returns:
 *   The sum of all the integer parameters.
 *   If n == 0, it returns 0.
 */
int sum_them_all(const unsigned int n, ...)
/* rest of the function remains the same */
{
if (n == 0)
{
return (0);
}

int sum = 0;
va_list args;
va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}
