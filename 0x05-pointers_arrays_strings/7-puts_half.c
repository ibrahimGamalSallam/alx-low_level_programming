#include "main.h"

/**
 * print_second_half - prints the second half of a string
 * followed by a new line
 * @str: string to be printed
 */
void print_second_half(char *str)
{
	int length, start, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		start = length / 2;
		for (i = start; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else
	{
		start = (length - 1) / 2;
		for (i = start + 1; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
