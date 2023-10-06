#include <stdio.h>

int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n'); // Print a newline character
return (0);
