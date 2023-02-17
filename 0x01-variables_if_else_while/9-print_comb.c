#include <stdio.h>
/**
 * main -This is for printing numbers
 *
 * Return: Return(0)
 */
int main(void)
{
	int a;
	int r = ',';
	int k = '$';
	int p = ' ';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a <= '8')
		{
			putchar(r);
			putchar(p);
		}
	}
	putchar(k);
	return (0);
}
