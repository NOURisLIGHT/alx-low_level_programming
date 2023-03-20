#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - makes array of chars
 * @size: size of memory to book
 * @c: char to fill the array
 * Return: ssdjklsjdflk
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);

char *A = (char *)malloc(size);
unsigned int i;
for (i = 0; i < size; i++)
A[i] = c;
return (A);
}
