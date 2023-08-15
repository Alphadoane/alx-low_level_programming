#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}

/**
* main - Entry point of the program.
*
* Description: This program demonstrates the use of the print_alphabet function
* to print the lowercase alphabet followed by a new line. It then returns 0 to
* indicate successful execution.
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
return 0;
}
