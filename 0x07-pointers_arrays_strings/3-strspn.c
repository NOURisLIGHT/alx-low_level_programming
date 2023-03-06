#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - calculates the number of bytes in the initial segment of s which consist only of bytes from accept
 * @s: initial segment
 * @accept: bytes that we look for in s
 * Return: no. of bytes in accept found in s
 */

unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
