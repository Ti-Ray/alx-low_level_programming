#include "main.h"
/**
 * main -This is to print ten lines of the alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void);
{
	char B = 'a';
	int w = 0;

	while (w <= 10)
	{
		while (B <= 'z')
		{
			putchar(B);
			B++;
		}
		w++;
	}
}
