#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_str(va_list args);

#endif /* MAIN_H */
