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
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
