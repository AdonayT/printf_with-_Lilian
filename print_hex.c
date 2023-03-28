#include "main.h"

/**
 * print_hex - prints an unsigned integer in hexadecimal form
 * @args: the va_list argument
 *
 * Return: the number of characters printed
 */
int print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char hex[100];
	int i, rem, len = 0;

	if (num == 0)
		return (_putchar('0'));

	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[len] = rem + 48;
		else
			hex[len] = rem + 55;
		len++;
		num /= 16;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(hex[i]);

	return (len);
}
