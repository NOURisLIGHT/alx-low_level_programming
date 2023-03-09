#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - calculate the sqrt of n
 * @n: the number
 * Return: -1 if invalid, or sqrt(n) if valid
 */
int _sqrt_recursion(int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
if (n == i * i)
{
return (i);
}
}
return (-1);
}
