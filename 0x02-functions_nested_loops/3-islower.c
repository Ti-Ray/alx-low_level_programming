#include "main.h"
/**
 * islower -This one displays one is c is lowercase
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
    int c;

    c = _islower('H');
    _putchar(c + '0');
    c = _islower('o');
    _putchar(c + '0');
    c = _islower(108);
    _putchar(c + '0');
    _putchar('\n');
    return (0);
}
