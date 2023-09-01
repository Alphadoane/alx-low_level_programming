#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count (number of command-line arguments)
 * @argv: Argument vector (array of command-line argument strings)
 *
 * Description: This function is the entry point of the program.
 * It prints all the command-line arguments, including the program name,
 * one argument per line.
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
