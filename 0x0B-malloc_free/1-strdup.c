#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - makes array of chars
 * @str: string to duplicate
 * Return: pointer to string or NULL
 */
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);
return (strdup(str));
}
