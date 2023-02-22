#include "main.h"
/**
 * times_table - This is to printthe *9 table
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			int s = x * y;
			int t = s /10;
			int o = s % 10;

			if (y == 0)
			{
				_putchar('0');
			}
			else if (s < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(s + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t + '0');
				_putchar((s % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
