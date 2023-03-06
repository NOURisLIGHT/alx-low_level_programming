#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * @s: main string
 * @accept: bytes that we look for in s
 * Return: Returns a pointer to the byte in s that matches one of t
 */

char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
