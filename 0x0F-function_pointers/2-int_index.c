#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array of integers
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: index of first element that matches with cmp, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int index;

if (size < 1 || array == NULL || cmp == NULL)
return (-1);

for (index = 0; index < size; index++)
{
if(cmp(array[index]))
return (index);
}

return (-1);
}
