#include "main.h"
/**
 * _islower - Shows 1 if the input is a
 * lowercase character, shows 0 if uppercase.
 * @c: An input character
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
