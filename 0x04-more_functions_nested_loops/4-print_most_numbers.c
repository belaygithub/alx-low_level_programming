#include "main.h"
/**
 * print_most_numbers - print the numbers 0 up to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: the numbers 0 to 9
 */
void print_most_numbers(void)
{
int i;
  
i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
i++;
}

_putchar('\n');
}
