#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
i = 97;
while (i < 103)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
