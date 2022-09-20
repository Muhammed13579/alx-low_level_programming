#include "main.h"
/**
* puts2 - a function that prints every other character of a string
* starting with the first character,
* followed by a new line
* @str: an input string
* Return: Nothing
*/
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[i] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\0');
}
