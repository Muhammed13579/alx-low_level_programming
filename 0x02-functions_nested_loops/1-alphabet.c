#include "main.h"
/**
 * print_alphabet - Print the lowercase alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putcahr(i);
	}
	_putchar('\n');
}
