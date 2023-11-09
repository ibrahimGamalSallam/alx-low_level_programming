#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *@size: parameter
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
			_putchar('#');
			_putchar(' ');
			}
		_putchar('\n');
		}
		_putchar('\n');
	}
}
