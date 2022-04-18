#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - random password generator for 101-crackme
 *
 * Return: 0 always
 */
int main(void)
{
char a[100];
int n, r, i;

n = 0;
i = 0;
srand(time(NULL));
while (n < 2645)
{
r = rand() % 122;
if (r > 32)
{
a[i++] = r;
n += r;
}
}
a[i++] = (2772 - n);
a[i] = '\0';
printf("%s", a);

return (0);
}
