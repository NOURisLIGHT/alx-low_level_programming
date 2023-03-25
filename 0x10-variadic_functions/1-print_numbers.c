#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print all input nums
 * @separator: separator between nums
 * @n: number of inputs
 * @...: variable number of args
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
va_start(ap, n);

int i;
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (separator != NULL)
{
if (i != n - 1)
printf("%s", separator);
else
printf("\n");
}
else
{
if (i != n - 1)
printf("");
else
printf("\n");
}
}
va_end(ap);
}
