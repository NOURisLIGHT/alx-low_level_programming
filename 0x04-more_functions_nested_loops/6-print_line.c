#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_line - checks to see if c is is digit
 * @n: length of line
 * Return: always 0
 */
void print_line(int n)
{
if (n > 0)
{
while (n--)
{
putchar('_');
}
putchar('\n');
}
else
putchar('\n');
}

