#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - reverse a string
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
int i, n = strlen(s);
for (i = n - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
