#include "main.h"
/**
 *_islower - is a function to check if letter is lower or upper case
 * @c: (description of parameter c))*
 * Return: 1 if lower and return 0 if upper
*/
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	return (0);
}
