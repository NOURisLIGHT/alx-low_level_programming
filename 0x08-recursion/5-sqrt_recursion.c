#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * _sqrt_recursion - calculate the sqrt of n
 * @n: the number
 * Return: -1 if invalid, or sqrt(n) if valid
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
{
int x = sqrt(n);
if (x * x != n)
return (-1);
else
return (sqrt(n));
}
}
