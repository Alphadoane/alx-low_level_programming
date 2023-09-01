#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count (number of command-line arguments)
 * @argv: Argument vector (array of command-line argument strings)
 *
 * Description:calculates and prints the number of command-line arguments
 * passed into it,excluding the program name itself (argv[0]).
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int num_arguments = argc - 1;
/* Print the value of argc (number of command-line arguments) */
printf("%d\n", argc - 1);

return (0);
}
