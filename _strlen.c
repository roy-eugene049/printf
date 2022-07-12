#include "main.h"
/**
 * _strlen - gets the length of a string
 * @s: inputed string
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int length = 0, i;

	i = 0;
	while (s[i] != '\0')
		i++;
		length++;
	return (length);
}
