#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: frist
 * @src: second
 * @n: no. of bytes
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
