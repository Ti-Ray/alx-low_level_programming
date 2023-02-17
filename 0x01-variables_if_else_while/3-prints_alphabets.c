#include <stdio.h>
/**
 * main -This is to display both caps and small letters
 *
 * Return: returns(0)
 */
int main(void)
{
	int A;
	int B;

	for (A = 'a'; A <= 'z')
	{
		putchar(A);
	}
	for (B = 'A'; B <= 'Z')
	{
		putchar(B);
	}
	putchar('\n');
	return (0);
}
