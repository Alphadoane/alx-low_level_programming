#include <unistd.h>

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
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, the character written is returned. On error, -1 is
 * returned.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
