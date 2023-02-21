#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Tells us if c is a letter or not
 * @c: a charachter that we want to check
 *
 * Return: 1 if c is letter. Else 0
 */
int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
