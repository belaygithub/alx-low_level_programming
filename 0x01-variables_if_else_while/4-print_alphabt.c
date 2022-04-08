#include <stdio.h>
/**
 * main -print some letters of alphabet
 *
 *Return: 0 always
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}

putchar('\n');

return (0);
}
