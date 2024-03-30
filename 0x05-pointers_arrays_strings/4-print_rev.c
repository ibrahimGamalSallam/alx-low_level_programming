#include "main.h"

/**
 * print_string_reversed - prints a string in reverse, followed by a new line
 * @str: string to be printed
 */
void print_string_reversed(char *str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = length - 1; i >= 0; i--)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
