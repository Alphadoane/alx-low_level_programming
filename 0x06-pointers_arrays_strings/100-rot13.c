#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rot13 - Encode a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *input)
{
	if (input == NULL)
	{
		return (NULL);
	}

	char *output = input;
	while (*input)
	{
		char c = *input;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			*input = (c - base + 13) % 26 + base;
		}

		input++;
	}

	return (output);
}

