#include "main.h"

/**
 * print_traingle -print a triangle of squares
 * @size: the size of the squares triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
int a, b, c;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = size - a; b > 1; b--)
{
_putchar(32);
}
for (c = 0; c <= a; c++)
{
_putchar(35);
}

_putchar('\n');
}
}
}
