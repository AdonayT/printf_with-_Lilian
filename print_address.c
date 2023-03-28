#include "main.h"

/**
 * print_address - Prints the memory address of a pointer argument
 * @args: The argument list that contains the pointer to print
 *
 * Return: The number of digits printed
 */
int print_address(va_list args)
{
	void *p = va_arg(args, void *);
	unsigned long int address = (unsigned long int)p;
	unsigned long int address_cpy = address;
	int digits = 0;

	_putchar('0');
	_putchar('x');
	digits += 2;

	if (address == 0)
	{
		_putchar('0');
		digits++;
	}
	else
	{
		while (address_cpy != 0)
		{
			address_cpy /= 16;
			digits++;
		}
	}

	print_hex_lower_case(address);
	return (digits);
}
