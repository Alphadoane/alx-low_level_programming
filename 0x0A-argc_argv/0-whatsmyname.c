#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count (number of command-line arguments)
 * @argv: Argument vector (array of command-line argument strings)
 *
 * Description: This function is the entry point of the program.
 * It displays the program's name, including any path information, on the
 * standard output (stdout).
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}

return (0);
}
