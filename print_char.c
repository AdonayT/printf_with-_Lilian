#include "main.h"

/**
 * print_char - Prints a single character
 * @args: The argument list that contains the character to print
 *
 * Return: The number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
