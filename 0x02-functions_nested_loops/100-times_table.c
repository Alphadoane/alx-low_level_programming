#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The times table to print
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

for (int row = 0; row <= n; row++)
{
for (int column = 0; column <= n; column++)
{
int result = row * column;

if (column != 0)
{
_putchar(',');
_putchar(' ');

if (result < 10)
_putchar(' ');

if (result < 100)
_putchar(' ');
}

_putchar(result / 100 + '0');
_putchar((result / 10) % 10 + '0');
_putchar(result % 10 + '0');

if (column == n)
_putchar('\n');
}
}
}
