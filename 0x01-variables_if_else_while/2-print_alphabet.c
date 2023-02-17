#include <stdio.h>
/**
 * main -This is to pint alphabet in lowercase
 *
 * Return: Returs(0)
 */
int main(void)
{
	int A = 'a';
	if (A!='z')
	{
		putchar(A);
		A++;
	}
	else
	{
		putchar("\n");
	}
	return (0);
}
