#include "main.h"
/**
 * islower -This one displays one is c is lowercase
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
