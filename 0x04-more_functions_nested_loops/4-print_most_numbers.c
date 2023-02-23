#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_most_numbers - checks to see if c is is digi
 * Return: nothing
 */
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if(i != 2 && i != 4)
_putchar(i + '0');
i++;
}
_putchar('\n');
}
