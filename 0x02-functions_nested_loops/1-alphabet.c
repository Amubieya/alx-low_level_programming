#include "main.h"
/**
* print_alphabet - entry point
*print_alphabet - Print the lowercase alphabet.
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
