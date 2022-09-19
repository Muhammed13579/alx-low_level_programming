#include "main.h"
/**
 * rev_string - afunction that revese a string
 * @s: input string
 * Return: No return
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char str;

	while (s[len] != '\0')
		len++;
	while (i < len--)
	{
		str = s[i];
		s[i++] = s[len];
		s[len] = str;
	}
}
