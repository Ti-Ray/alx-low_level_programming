#include "main.h"
/**
 * main -This is to print the alphabet
 *
 * Returns (0)
 */
void print_alphabet(void);
int main (void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int A;
	for (A = a; A < z; a++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
