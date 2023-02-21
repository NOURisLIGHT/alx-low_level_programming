#include <unistd.h>
#include <main.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

void print_alphabet(void)
{
int i = 97;
while (i < 123)
{
_putchar(i);
i++;
}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
