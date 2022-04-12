#include "main.h"
/**
 * print_sign - return 1 if n > 0 -return -1 if n < 0 - return 0 if n=0
 * @n: the int to print
 * Return: 0 always
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
_putchar('-');
return (-1);
}

}
