#include "main.h"
/**
 * main -This is to print ten lines of the alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int w = 0;

	while (w <= 10)
	{
		char B = 'a';
		while (B <= 'z')
		{
			_putchar(B);
			B++;
		}
		_putchar('\n');
		w++;
	}
}
