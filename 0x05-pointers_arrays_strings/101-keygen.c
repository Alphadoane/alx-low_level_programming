#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password.
 *
 * Return: 0 on success.
 */
int main(void)
{
char password[100];
int i, length, sum, random;

srand(time(NULL));

length = rand() % 11 + 6;

sum = 0;
for (i = 0; i < length; i++)
{
random = rand() % 62;

if (random < 26)
{
password[i] = 'a' + random;
}
else if (random < 52)
{
password[i] = 'A' + (random - 26);
}
else
{
password[i] = '0' + (random - 52);
}

sum += password[i];
}

if (sum < 2772)
{
password[i - 1] += 2772 - sum;
}

password[length] = '\0';

printf("%s\n", password);

return (0);
}
