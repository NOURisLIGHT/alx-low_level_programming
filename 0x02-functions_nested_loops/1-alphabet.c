#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */
void print_alphabet(void)
{
int i = 97;
while (i < 123)
{
_putchar(i);
i++;
}
_putchar('\n');
}

