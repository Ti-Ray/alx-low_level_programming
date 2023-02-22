#include "main.h"
/**
 * islower -This one displays one is c is lowercase
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	int d, r, y;
	c = ('H');
	d = _islower(c);
	_putchar(d);
	c = ('o');
	r = _islower(c);
	_putchar(r);
	c = (108);
	y = _islower(c);
	_putchar(y);
	_putchar('\n');
	return (0);
}
