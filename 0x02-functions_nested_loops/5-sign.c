#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 *print_sign - tells you the sign of input int
 *@n: the int we will see its sign
 * 
 *Return: 1 if n is +ve, 0 if n = 0. Else return -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

