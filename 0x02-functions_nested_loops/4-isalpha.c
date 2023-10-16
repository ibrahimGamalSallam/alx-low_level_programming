#include "main.h"
/**
 * _isalpha - Check Holberton
* @c: An input character
* Description: function returns 1 if the character is a
* letter, lowercase or uppercase.
* Return:  or  in otherwise.
*/
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
