#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * print_array - print, array
 * @a: the array
 * @n: size of array
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d", a[i]);
}
else
{
printf("%d", a[i]);
putchar(',');
putchar(' ');
}
}
}
