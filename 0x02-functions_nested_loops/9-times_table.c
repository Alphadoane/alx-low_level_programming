#include "main.h"

/**
 * print_number - Prints a two-digit number with appropriate formatting
 * @num: The number to be printed
 */
void print_number(int num)
{
if (num < 10)
_putchar(' ');
else
_putchar(num / 10 + '0');

_putchar(num % 10 + '0');
}

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
int row, column;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
int result = row * column;

if (column != 0)
{
_putchar(',');
_putchar(' ');
}

print_number(result);

if (column == 9)
_putchar('\n');
}
}
}
