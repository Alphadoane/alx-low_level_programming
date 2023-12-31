#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there are errors
 */
int main(int argc, char *argv[])
{
int sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (int i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (num == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}

if (num < 0)
{
printf("Error\n");
return (1);
}

sum += num;
}

printf("%d\n", sum);

return (0);
}

