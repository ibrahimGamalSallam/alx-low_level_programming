#include "main.h"

/**
 * reverse_string - reverses a given string
 * @str: string to be reversed
 */
void reverse_string(char *str)
{
	char temp;
	int start, end, length;

	start = 0;
	end = 0;
	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	for (start = 0; start < length / 2 ; start++)
	{
		temp = str[start];
		str[start] = str[end];
		str[end--] = temp;
	}
}
