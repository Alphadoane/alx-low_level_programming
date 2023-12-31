#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program.
 *
 * Description: prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
long num = 612852475143;
long largestPrimeFactor = -1;

while (num % 2 == 0)
{
largestPrimeFactor = 2;
num /= 2;
}

for (long i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largestPrimeFactor = i;
num /= i;
}
}

if (num > 2)
largestPrimeFactor = num;

printf("%ld\n", largestPrimeFactor);

return (0);
}
