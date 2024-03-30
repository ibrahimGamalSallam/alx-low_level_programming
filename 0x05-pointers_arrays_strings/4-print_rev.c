#include "main.h"

/**
 * print_string_reversed - prints a string in reverse, followed by a new line
 * @str: string to be printed
 */
void print_string_reversed(char *str)
{
	int i, j, len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
