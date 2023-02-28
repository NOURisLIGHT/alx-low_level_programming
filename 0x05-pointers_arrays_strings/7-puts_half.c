#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - reverse a string
 * @str: the string
 * Return: void
 */
void puts_half(char *str)
{
int i, n = strlen(str);
if (n % 2 == 0)
{
for (i = n / 2; i < n; i++)
{
putchar(str[i]);
}
}
else
{
for (i = (n - 1) / 2; i < n; i++)
{
putchar(str[i]);
}
}
putchar('\n');
}
