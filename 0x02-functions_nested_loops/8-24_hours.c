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
	int m1;
	int h1;

	for (h = '0'; h < '3'; h++)
	{
		_putchar(h);
		_putchar(h1);
		_putchar(':');
		_putchar(m);
		_putchar(m1);
		_putchar('\n');
		for (h1 = '0'; h1 <= '9'; h1++)
		{
			_putchar(h);
			_putchar(h1);
			_putchar(':');
			_putchar(m);
			_putchar(m1);
			_putchar('\n');
			for (m = '0'; m < '6'; m++)
			{
				_putchar(h);
				_putchar(h1);
				_putchar(':');
				_putchar(m);
				_putchar(m1);
				_putchar('\n');
				for (m1 = '0'; m1 <= '9'; m1++)
				{
					_putchar(h);
					_putchar(h1);
					_putchar(':');
					_putchar(m);
					_putchar(m1);
					_putchar('\n');
				}
			}
		}
	}
}
