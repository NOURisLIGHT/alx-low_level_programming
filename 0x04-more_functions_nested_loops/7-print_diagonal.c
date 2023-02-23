#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_diagonal - checks to see if c is is digit
 * @n: length of line
 * Return: always 0
 */
void print_diagonal(int n)
{
int i = 0;
while (i < n)
{
for (int j = 0; j < i; j++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
i++;
}
}

