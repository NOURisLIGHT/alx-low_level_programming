#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concate 2 strings
 * @s1: first str
 * @s2: second str
 * Return: pointer to string or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, ci;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = ci = 0;

while (i != '\0')
i++;
while (ci != '\0')
ci++;

concat = malloc(sizeof(char) * (i + ci + 1));
if (concat == NULL)
return (NULL);
i = ci = 0;
while (s1[i] != '\0')
{
concat[i] = s1[i];
i++;
}
while (s2[ci] != '\0')
{
concat[i] = s2[ci];
ci++;
i++;
}
concat[i] = '\0';
return (concat);
}
