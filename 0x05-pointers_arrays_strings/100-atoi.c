#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer, or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
int sign = 1;  /* Initialize sign as positive */
int result = 0;
int i = 0;

/* Handle leading whitespace characters */
while (s[i] == ' ')
{
i++;
}

/* Handle the sign character(s) */
while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
{
sign *= -1; /* Toggle sign for each '-' encountered */
}
i++;
}

/* Convert the numeric part of the string to an integer */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

/* Apply the sign to the result */
return (result *sign);
}
