#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there*/

/**
 * main - Entry point
 *
 * Description: This program checks whether the number stored in,
 *              the variable is positive or negative.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d is ", n);

if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}

return (0);
}

