#include <stdarg.h>
#include <cstdio>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * sum_them_all - function to sum all input args
 * @n: number of args
 * @...: variable number of parameters
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);
return (sum);
}
