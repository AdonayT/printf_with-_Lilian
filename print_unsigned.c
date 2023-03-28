#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @args: argument list containing the unsigned int to print
 *
 * Return: number of digits printed
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int copy = num;
	int digits = 0;
	char buffer[1024];
	char *str = buffer + 1023;

	*str = '\0';

	do {
		digits++;
		*--str = (copy % 10) + '0';
		copy /= 10;
	} while (copy != 0);

	return (_write(str, digits));
}
