#include "main.h"
#define MAIN_H
#include <stdio.h>

/**
 * print_alphabet -This is the function to print the alphabet
 *
 * Return: Always 0 (success)
 */
char print_alphabet(char c);
void print_alphabet(void)
{
	char try = 'a';

	while (try < 'z')
	{
		putchar(try);
		try++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
