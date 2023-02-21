#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabetx10(void)
{
int j = 0;
while(j < 10)
{
int i = 97;
while (i < 123)
{
_putchar(i);
i++;
}
j++;
_putchar('\n');
}
}
