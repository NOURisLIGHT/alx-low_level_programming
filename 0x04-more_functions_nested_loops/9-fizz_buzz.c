#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - description
 * Return: Always 0
 */
int main()
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
i++;
}
putchar('\n');
return (0);
}
