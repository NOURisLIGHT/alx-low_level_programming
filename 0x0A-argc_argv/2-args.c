#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: the number of arguments
 * @argv: array of strings that was written
 * Return: zero always
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

