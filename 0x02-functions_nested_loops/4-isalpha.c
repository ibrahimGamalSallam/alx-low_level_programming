#include "main.h"
/*
* _isalpha ()- is alphabet?
* Description: a function to check if the character provided is alphabet
* @c: variable
* Return: return 1 if alphabet and 0 if not
* function: does a lot of wonders
*/
int _isalpha(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
