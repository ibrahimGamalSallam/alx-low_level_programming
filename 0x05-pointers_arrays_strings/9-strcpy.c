#include "main.h"

/**
 * copy_string - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @destination: pointer to the buffer in which we copy the string
 * @source: string to be copied
 *
 * Return: the pointer to dest
 */
char *copy_string(char *destination, char *source)
{
	int length, i;

	length = 0;

	while (source[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';

	return (destination);
}
