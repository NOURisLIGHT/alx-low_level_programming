#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks if c is upper or lower case
 * @c: the letter we will check
 * Return: 1 if upper, 0 if lower
 */
int _isupper(int c)
{
if (isupper(c))
return (1);
else
return (0);
}

