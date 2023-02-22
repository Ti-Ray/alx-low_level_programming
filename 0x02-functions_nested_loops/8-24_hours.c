#include "main.h"
/**
 * jack -bauer -This is to print minutes for a day
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int h;
	int m;
	for (h = 0; h < 60; h++)
	{
		_putchar('0' + h);
		for (m = 0; m < 60; m++)
		{
			_putchar('0' + m);
		}
	}
}
