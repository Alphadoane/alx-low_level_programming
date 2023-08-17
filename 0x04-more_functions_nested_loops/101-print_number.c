#include "main.h"

/**
 * print_number - Prints an integer using _putchar function.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
_putchar('-');
n = -n;
}

int divisor = 1;
int temp = n;

while (temp / 10 != 0)
{
divisor *= 10;
temp /= 10;
}

while (divisor != 0)
{
_putchar('0' + n / divisor);
n %= divisor;
divisor /= 10;
}
}
