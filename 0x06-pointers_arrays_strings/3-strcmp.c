#include "main.h"
/**
 * _strcmp -  a function that compares two strings.
 * @s1: input string
 * @s2: input strig
 * Return: 0 if s1 and s2 are equal
 * another number if different
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
