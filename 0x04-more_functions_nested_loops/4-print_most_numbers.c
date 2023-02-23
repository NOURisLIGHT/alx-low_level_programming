#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_numbers - checks to see if c is is digi
 * Return: nothing
 */
void print_numbers(void)
{
int i = 0;
while (i < 10)
{
if(i != 2 && i != 4)
putchar(i + '0');
i++;
}
putchar('\n');
}
