#include "main.h"

/**
 * print_alphabet - Displays the alphabet
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char vl;

	vl = 'a';

	while (vl <= 'z')
	{
		putchar(vl);
		vl++;
	}
	putchar('\n');
}
