#include <stdio.h>
#include "main.h"

/**
 * print_integer_array - prints n elements of an array of integers
 * followed by a new line
 * @array: array to be printed
 * @length: number of elements to print
 */
void print_integer_array(int *array, int length)
{
	int i;

	for (i = 0; i < length; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
		printf("\n");
}
