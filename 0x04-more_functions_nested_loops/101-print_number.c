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
int num_digits = 0;
int temp = n;

while (temp != 0)
{
num_digits++;
temp /= 10;
}

int divisor = 1;
int i;
for (i = 1; i < num_digits; i++);
divisor *= 10;

while (divisor != 0)
{
_putchar('0' + n / divisor);
n %= divisor;
divisor /= 10;
}
}
