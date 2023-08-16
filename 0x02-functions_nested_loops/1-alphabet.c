#include <unistd.h>

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description: This function uses the _putchar function to print each
 * lowercase letter of the alphabet, followed by a new line character.
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the usage of the print_alphabet
 * function. The main function returns 0 to indicate successful execution.
 *
 * Return: 0 on success
 */
int main(void)
{
print_alphabet();
return (0);
}
