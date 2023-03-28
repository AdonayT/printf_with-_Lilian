#include "main.h"

/**
 * print_binary - prints an unsigned int in binary
 * @args: the argument to print
 *
 * Return: the number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int copy = num;
	int binary_digits = 0, i, result = 0;
	char *binary;

	while (copy != 0)
	{
		copy /= 2;
		binary_digits++;
	}

	if (num == 0)
	{
		result += _putchar('0');
		return (result);
	}

	binary = malloc(sizeof(char) * binary_digits);

	if (binary == NULL)
		return (-1);

	for (i = 0; i < binary_digits; i++)
	{
		binary[i] = (num % 2) + '0';
		num /= 2;
	}

	for (i = binary_digits - 1; i >= 0; i--)
	{
		result += _putchar(binary[i]);
	}

	free(binary);

	return (result);
}
