#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strchr - finds a char in string
 * @s: string
 * @c: char
 * Return: pointer to the place of the first occurence of char
 */

char *_strchr(char *s, char c)
{
return (strchr(s, c));
}
