#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: array of strings that was written
 * Return: zero if true, 1 if error occurs
 */
int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("0\n");
return (0);
}
else
{
int i;
int sum;
for (i = 1; i < argc; i++)
{
if (isalpha(argv[i]))
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
}
