#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - reverse a string
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
int i, n = strlen(str);
for (i = 0; i < n; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
