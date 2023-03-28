#include "main.h"
#include <unistd.h>

/**
 * print_str - prints a string to stdout
 * @args: argument list (string)
 *
 * Return: number of characters printed
 */
int print_str(va_list args)
{
    char *str = va_arg(args, char *);
    int len = 0;

    if (!str)
        str = "(null)";

    while (str[len])
        len++;

    return (write(1, str, len));
}
