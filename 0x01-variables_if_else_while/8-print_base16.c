#include <stdio.h>
/**
 * main -This is to deal with hexa numbers
 *
 * Return: Return(0);
 */
int main(void)
{
	int a;

	for (a = '0x00'; a <= '0x10'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
