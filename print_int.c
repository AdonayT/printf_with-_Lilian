#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_int - prints an integer to stdout
 * @args: argument list (integer)
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    char buf[12]; /* enough to hold -2147483648 plus null terminator */
    int len = 0;

    if (n < 0)
    {
        buf[len++] = '-';
        n = -n;
    }

    if (n == 0)
    {
        buf[len++] = '0';
    }
    else
    {
        while (n > 0)
        {
            buf[len++] = (n % 10) + '0';
            n /= 10;
        }
    }

    while (len > 0)
    {
        len--;
        write(1, &buf[len], 1);
    }

    return (len);
}
