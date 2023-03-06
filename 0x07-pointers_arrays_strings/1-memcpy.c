#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copies n bites from memory area src to memory area dest
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: num. of bytes to copy from src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}

