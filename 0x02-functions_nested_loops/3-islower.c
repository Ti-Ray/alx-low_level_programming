#include "main.h"
/**
 * islower -This one displays one is c is lowercase
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
    int r = c;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
