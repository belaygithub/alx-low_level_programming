#include <stdio.h>
/**
 * main - print a hexadecimal string
 *
 *Return: 0 always
 */
int main(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
putchar(c);
}

for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}

putchar('\n');

return (0);
}
