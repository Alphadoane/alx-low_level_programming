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

srand(time(NULL)); // Seed the random number generator with the current time

length = rand() % 11 + 6; // Generate a random password length between 6 and 16 characters

sum = 0;
for (i = 0; i < length; i++)
{
random = rand() % 62; // Generate a random number between 0 and 61

if (random < 26) // If random is in the range [0, 25], choose a lowercase letter
{
password[i] = 'a' + random;
}
else if (random < 52) // If random is in the range [26, 51], choose an uppercase letter
{
password[i] = 'A' + (random - 26);
}
else // If random is in the range [52, 61], choose a digit
{
password[i] = '0' + (random - 52);
}

sum += password[i]; // Calculate the sum of ASCII values for characters in the password
}

if (sum < 2772) // Ensure the sum of ASCII values is at least 2772 (as required by 101-crackme)
{
password[i - 1] += 2772 - sum; // Adjust the last character to meet the requirement
}

password[length] = '\0'; // Null-terminate the password

printf("%s\n", password); // Print the generated password

return (0);
}
