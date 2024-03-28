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
	int x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i ; j > 0; j--)
			{
				_putchar(' ');
			}
			for (x = 0; x < i; x++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
