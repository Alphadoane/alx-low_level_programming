#include "main.h"

/**
 * print_number - Prints an integer using _putchar function.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
int divisor = 1;
int temp = n;
int digit;

if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
_putchar('-');
n = -n;
temp = n;
}

while (temp > 9)
{
divisor *= 10;
temp /= 10;
}

while (divisor > 0)
{
digit = n / divisor;
_putchar('0' + digit);
n -= digit *divisor;
divisor /= 10;
}
}
