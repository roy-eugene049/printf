#include "main.h"
/**
 * write_char - writes a character to the stdout
 * @c: character inputed
 *
 * Return: number of characters printed
 */
int write_char(char c)
{
	return (write(1, &c, 1));
}
