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

printf("%lu, %lu, ", a, b);

for (i = 2; i < 98; i++)
{
a = b;
b = next;
next = a + b;
printf("%lu", next);

if (i != 97)
printf(", ");
}

printf("\n");
return (0);
}
