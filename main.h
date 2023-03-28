#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_hex(va_list args);
int print_octal(va_list args);
int print_hex_upper(va_list args);
int print_address(va_list args);
int print_custom_string(va_list args);

/* edits */
int printrot13(va_list list);
int revstring(va_list list);
int get_length(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char *format, int *i, va_list list);
int get_flags(const char *format, int *i);
#endif /* MAIN_H */
