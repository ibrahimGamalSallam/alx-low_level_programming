#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - alphabet in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i < 10)
	{
		char j =  'a';
		while (j <= 'z');
		{
			putchar(j);
			j++;
		}
		putchar ('\n');
		i++;
 }
}
