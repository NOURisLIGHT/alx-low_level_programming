#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Gets the last num
 * @a: the int we will get its last digit
 * Return: the last digit
 */
int print_last_digit(int a)
{
_putchar(abs(a) % 10);
return (abs(a) % 10);
}
