#include "main.h"

/**
 * print_address - prints the address of a pointer
 * @args: the va_list containing the address to print
 *
 * Return: the number of characters printed
 */
int print_address(va_list args)
{
    char buffer[1024];
    void *ptr = va_arg(args, void *);
    unsigned long int address = (unsigned long int)ptr;
    int printed;

    if (!ptr)
        return (_printf("(nil)"));

    printed = _sprintf(buffer, "0x%lx", address);

    return (write(STDOUT_FILENO, buffer, printed));
}
