#include <stdarg.h>
#include <cstdio>
#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all input args
 * @n: number of args
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
int i, sum = 0;

if (n == 0)
return (0);
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}

