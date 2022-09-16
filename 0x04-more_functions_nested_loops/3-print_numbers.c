#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}

