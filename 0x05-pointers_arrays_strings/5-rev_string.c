#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
int i, n = strlen(s);
for (i = 0; i < n / 2; i++)
{
char l;
l = s[i];
s[i] = s[n - i - 1];
s[n - i - 1] = l;
}
}
