#include "main.h"
/**
 * main -This is to print the alphabet
 *
 * Returns (0)
 */
void print_alphabet(void)
{
	int A;
	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}
	_putchar('\n');
	return (0);
}

int main (void)
{
	print_alphabet();
	return (0);
}
