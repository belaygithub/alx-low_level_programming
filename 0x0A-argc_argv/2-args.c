#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments of the program separated by new line
 * @argc: argument count or size of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
int number = 0;
while (number < argc)
{
printf("%s\n", *(argv + number));
number++;
(*argv)++;
}
return (0);
}
