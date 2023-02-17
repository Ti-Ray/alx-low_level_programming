#include <stdio.h>
/**
 * main -This is to display double numbers
 *
 * Return: (return (Success))
 */
int main(void)
{
	int a;
	int b = ',';
	int c = ' ';

	for (a = '01'; a <= '99'; a++)
	{
		if (a != '10')
		{
			putchar(a);
			putchar(b);
			putchar(c);
		}
	}
}
