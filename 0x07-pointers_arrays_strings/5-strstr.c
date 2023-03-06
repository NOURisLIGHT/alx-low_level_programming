#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr -  finds the first occurrence of the substring needle in haystack
 * @haystack: main string
 * @needle: substring
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
