#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: pointer to memory area
 * @b: constant byte
 * @n: first n bytes from memory
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
