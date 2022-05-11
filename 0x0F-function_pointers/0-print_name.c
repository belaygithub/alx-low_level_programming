#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: A pointer to a function that prints a name
 * Return: 0 always
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
