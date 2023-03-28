#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary notation
 * @args: The argument list that contains the unsigned int to print
 *
 * Return: The number of digits printed
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int binary[32], i, printed = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; n > 0; i++)
	{
		binary[i] = n % 2;
		n /= 2;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		printed++;
	}

	return (printed);
}
