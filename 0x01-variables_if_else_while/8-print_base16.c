#include <stdio.h>
/**
 * main -This is to deal with hexa numbers
 *
 * Return: Return(0);
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
