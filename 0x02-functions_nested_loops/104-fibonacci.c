#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long long int a = 1, b = 2, next;

printf("%llu, %llu, ", a, b);

for (int i = 2; i < 98; i++)
{
next = a + b;
printf("%llu", next);

if (i != 97)
printf(", ");

a = b;
b = next;
}

printf("\n");
return (0);
}
