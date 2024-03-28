#include <stdio.h>
/**
 * main - main function- prime numbers
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned int x = 2;
	unsigned long number = 612852475143;

	while (x != number)
	{
		if (number % x == 0)
		{
			number = number / x;
		} else
		{
			x++;
		}
	}
	printf("%lu\n", number);
	return (0);
}
