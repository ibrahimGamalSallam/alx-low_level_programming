#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to print to character
 */
void print_number(int number)
{
	int i;
	int d = 1;
	unsigned int x = number;
	unsigned int y = number;
	int c = 0;

	if (number == 0)
	{
		_putchar('0');
	}
	if (number < 0)
	{
		_putchar('-');
		number = number + 1;
		number = -number;
		y = number;
		x = number;
		x += 1;
		y += 1;
	}

	while (x != 0)
	{
		x = x / 10;
		c++;
	}
	for (i = 1; i < c; i++)
	{
		d *= 10;
	}
	for (i = 0; i < c; i++)
	{
		_putchar(y / d + '0');
		y = y % d;
		d = d / 10;
	}
}
