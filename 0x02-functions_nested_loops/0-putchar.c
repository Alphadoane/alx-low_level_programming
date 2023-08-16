#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the string "_putchar" followed by a newline
 * character using the write function. The main function returns 0 to indicate
 * successful execution.
 *
 * Return: 0 on success
 */
int main(void)
{
char *str = "_putchar\n";
int i = 0;

while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}

return (0);
}
