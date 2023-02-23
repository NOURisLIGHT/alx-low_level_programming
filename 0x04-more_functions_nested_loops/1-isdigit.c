#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks to see if c is is digit
 * @c: num we check
 * Return: 1 if yes, 0 if no
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}

