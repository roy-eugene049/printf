#include "main.h"
/**
 * write_str - writes a string to the stdout
 * @s: input string
 *
 * Return: lenght of integers printed
 */
int write_str(char *s)
{
	int length;

	if (s == (char *)0)
	{
		s = "(null)";
		write(1, s, 6);
		return (6);
	}
	for (i =0;s[i]; i++)
	{
		if ((s[i] < 32 && s[i] > 0) || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
		}
	}
	length = _strlen(s);

	write(1, s, length);
	return (length);
}
