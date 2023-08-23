#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Add two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result (r) or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int max_len = len1 > len2 ? len1 : len2;
int i = len1 - 1;
int j = len2 - 1;
int k = max_len - 1;

if (max_len + 1 > size_r)
return (0);

r[max_len + 1] = '\0';

while (i >= 0 || j >= 0 || carry > 0)
{
int digit1 = i >= 0 ? n1[i] - '0' : 0;
int digit2 = j >= 0 ? n2[j] - '0' : 0;

int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';

i--;
j--;
k--;
}

while (r[k + 1] == '0')
k++;
if (k == max_len - 1)
return ("0");

if (k > 0)
memmove(r, r + k, max_len - k + 1);

return (r);
}
