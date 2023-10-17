#include "main.h"
/**
 * _abs - function to get the absolute value of a number
 * @num: parameter to be used
 * Return: always absolute value
 *
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else
		return (num);
}
