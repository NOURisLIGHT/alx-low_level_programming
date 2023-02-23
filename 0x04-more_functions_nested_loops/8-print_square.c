#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_square - checks to see if c is is digit
 * @size: length of line
 * Return: always 0
 */
void print_square(int size)
{
if (size > 0)
{
int row = size;
while (row > 0)
{
int column = size;
while (column > 0)
{
_putchar('#');
column--;
}
_putchar('\n');
row--;
}
}
else
_putchar('\n');
}

