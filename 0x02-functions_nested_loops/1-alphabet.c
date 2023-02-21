#include <unistd.h>
#include "main.h"
void print_alphabet(void)
{
int i = 97;
while (i < 123)
{
_putchar(i);
i++;
}
}

int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
