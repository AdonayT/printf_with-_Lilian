#include "main.h"

/**
 * _printf - prints a formatted string to stdout
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i, len = 0;

    va_start(args, format);

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                return (-1);
            len += print_custom_string(args, format[i]);
        }
        else
        {
            len += print_char(format[i]);
        }
    }

    va_end(args);

    return (len);
}
