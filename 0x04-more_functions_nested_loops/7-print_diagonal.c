#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: parameter to be used
 * Return: always print 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	};
	}
}
