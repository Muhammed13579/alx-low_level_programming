#include "main.h"
/**
* print_sign - Determine if the input number is greather
* less or equal to 0
*
* @n: The input number as an integar
* Return: 1 if greather than zero, 0 if input is zero
* -1 if less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

