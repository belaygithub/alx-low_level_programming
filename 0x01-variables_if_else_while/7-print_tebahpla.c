#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 *
 *Return:0 always
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}

putchar('\n');

return (0);
}
