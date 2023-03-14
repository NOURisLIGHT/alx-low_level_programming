#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the change
 * @argc: the number of arguments
 * @argv: the arguments as strings
 * Return: 0 if all is ok, 1 if there is no number, or the input is not integer
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
int x = atoi(argv[1]);
{
if (x < 0)
{
printf("0\n");
}
else
{
int counter = 0;
while (x > 0)
{
if (x >= 25)
x -= 25;
else if (x >= 10)
x -= 10;
else if (x >= 5)
x -= 5;
else if (x >= 2)
x -= 2;
else
x -= 1;
counter++;
}
printf("%d\n", counter);
}
return (0);
}
}
}

