#include <stdio.h>
#include "main.h"
/**
 * print_alphabet- Prints the letters from a to z on one line
 *
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
	_putchar(i);
}
_putchar ('\n');
}
