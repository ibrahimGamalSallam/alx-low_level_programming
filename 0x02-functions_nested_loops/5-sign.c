#include "main.h"

/**
 * print_sign - prints value if number is less or more or equals zero
 *@n : parameter to be used
 * Return: always return 0
 */
int print_sign(int n)
{
int i;
if (n > 0)
{
i = 1;
_putchar ('+');
}
else if (n == 0)
{
i = 0;
_putchar ('0');
}
else
{
i = -1;
_putchar ('-');
}
return (i);
}
