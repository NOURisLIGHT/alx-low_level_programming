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
unsigned int i;
char *str;

if (size == 0)
return (NULL);
str = malloc(size);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
