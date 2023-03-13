#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: array of strings that was written
 * Return: zero if true, 1 if error occurs
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
int i;
int multi = 1;
for (i = 1; i < argc; i++)
{
multi *= atoi(argv[i]);
}
printf("%d\n", multi);
return (0);
}
}
