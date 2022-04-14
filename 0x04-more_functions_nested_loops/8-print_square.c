#include "main.h"

/**
 * print_square - prints n square according to n number of times
 * @size: the number of squares number of times
 * Return: 0
 */
void print_square(int size)
{
int a;
int b;

if (size <= 0)
{
_putchar('\n');
}
 
else
{
for (a = 0; a < size; a++)
{
for ( b = 0; b < size; b++)
{
_putchar(35);
}

_putchar('\n');
}
}
}
