#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - returns 1 or 0 based on the letter
 * 
 * @c: the letter we will check
 *
 * Return: 1 if c is capital. else 0
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
