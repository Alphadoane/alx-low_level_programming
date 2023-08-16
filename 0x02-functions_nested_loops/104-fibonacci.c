#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned int a = 1, b = 2, next;
int i;

printf("%u, %u, ", a, b);

for (i = 2; i < 98; i++)
{
next = a + b;
printf("%u", next);

if (i != 97)
printf(", ");

a = b;
b = next;
}

printf("\n");
return (0);
}
