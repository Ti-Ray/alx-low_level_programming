#include "main.h"
/**
 *print_alphabet -This is to print the alphabet
 *
 * Returns: Always 0 (success)
 */
void print_alphabet(void)
{
	char A;
	A = 'a';
	while (A <= 'z')
	{

		_putchar(A);
		A++;
	}
	_putchar('\n');
}
