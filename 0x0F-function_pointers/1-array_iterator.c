#include <stddef.h>

/**
 * array_iterator - Execute a function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
size_t i;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
/**
 * print_element - A function to print an integer element.
 * @element: The integer element to be printed.
 */
void print_element(int element)
{
printf("%d\n", element);
}
/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
int myArray[] = {1, 2, 3, 4, 5};
size_t arraySize = sizeof(myArray) / sizeof(myArray[0]);

array_iterator(myArray, arraySize, print_element);

return (0);
}
