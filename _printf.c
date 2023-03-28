#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formatted string to standard output
 * @format: format string containing conversion specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					printed_chars += _print_char(args);
					break;
				case 's':
					printed_chars += _print_str(args);
					break;
				case '%':
					putchar('%');
					printed_chars++;
					break;
				default:
					putchar('%');
					putchar(*format);
					printed_chars += 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			printed_chars++;
		}

		format++;
	}

	va_end(args);

	return (printed_chars);
}

/**
 * _print_char - prints a character argument
 * @args: va_list containing the character to print
 *
 * Return: number of characters printed
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);

	return (1);
}
