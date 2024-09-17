#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The string to check
 *
 * Return: 1 if it is a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
if (*str == '\0')
return (0);

while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}

return (1);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 on success, or 98 on error
 */
int main(int argc, char *argv[])
{
char *num1, *num2;
char command[1024];

if (argc != 3)
{
fprintf(stderr, "Error\n");
exit(98);
}

num1 = argv[1];
num2 = argv[2];

if (!is_positive_number(num1) || !is_positive_number(num2))
{
fprintf(stderr, "Error\n");
exit(98);
}

/* Construct the bc command to perform multiplication */
snprintf(command, sizeof(command), "echo '%s * %s' | bc", num1, num2);

/*  Execute the command and print the result */
system(command);

return (0);
} 
