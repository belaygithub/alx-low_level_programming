#include "main.h"
/**
 * print_line - draws a straight line according to parameter
 * @n: the number of lines to draw
 * Return: 0
 */
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (i = 0; i < n; i++)
{
_putchar(95);
}

_putchar('\n');
}
}
