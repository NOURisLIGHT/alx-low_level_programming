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
char i = 0, n = strlen(s);
while (i < n / 2)
{ 
char l;
l = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = l;
i++;
}
puts(s);
}
