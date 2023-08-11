#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations of single-digit numbers,
 *              separated by a comma and a space, in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1;
int digit2;

for (digit1 = 0; digit1 <= 9; digit1++)
{
for (digit2 = digit1; digit2 <= 9; digit2++)
{
putchar(digit1 + '0');
putchar(digit2 + '0');

if (digit1 != 9 || digit2 != 9)
{	    
putchar(',');
putchar(' ')'\n';
}
}
}

return (0);
}
