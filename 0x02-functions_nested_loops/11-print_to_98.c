#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * print_to_98 - prints from n to 98
 * @n: the int we will start with
 * Return: Always 0
 */
void print_to_98(int n)
{
int i = n;
if (i > 98)
{
while (i > 97)
{
printf("%d", i);
if (i != 98)
printf(", ");
else
printf(" ");
i--;
}
}
else if (i <= 98)
{
while (i < 99)
{
printf("%d", i);
if (i != 98)
printf(", ");
else
printf(" ");
i++;
} 
}
fprintf(stderr,"This is message 2\n");
}
