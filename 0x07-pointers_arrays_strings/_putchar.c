#include <unistd.h>
/**
 * _putchar - writes the charater c to stdout
 * @c: the character to print
 *
 * Return: 1 on success
 * -1 is returned when there is errno, and error is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
