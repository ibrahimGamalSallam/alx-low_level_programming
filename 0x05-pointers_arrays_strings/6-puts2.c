#include "main.h"

/**
 * print_every_other_char - prints every other character of a string
 * followed by a new line
 * @string: string to print the characters from
 */
void print_every_other_char(char *string)
{
	int length, i;

	length = 0;

	while (string[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(string[i]);
	}

	_putchar('\n');
}
