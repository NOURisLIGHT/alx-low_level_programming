#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverse arra
 * @a: array name
 * @n: array size
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
