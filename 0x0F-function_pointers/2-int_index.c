/**
 * int_index - Search for an integer in an array.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used for comparison.
 *
 * Return: The index of the first element where cmp function doesn't return 0,
 * or -1 if no such element is found or if size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
/**
 * is_even - A comparison function to check if an integer is even.
 * @num: The integer to be checked.
 *
 * Return: 1 if num is even, 0 otherwise.
 */
int is_even(int num)
{
return (num % 2 == 0);
}
/**
 * main - Entry point of the program.
 * Return: Always 0.
 */
int main(void)
{
int myArray[] = {1, 3, 6, 7, 9};
int arraySize = sizeof(myArray) / sizeof(myArray[0]);

int index = int_index(myArray, arraySize, is_even);

if (index != -1)
{
printf("First even number found at index %d: %d\n", index, myArray[index]);
}
else
{
printf("No even number found in the array.\n");
}

return (0);
}

