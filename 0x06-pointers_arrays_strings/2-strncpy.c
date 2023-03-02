#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - concatenate strings
 * @dest: frist
 * @src: second
 * @n: no. of bytes
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
