#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_str(va_list args);
int print_hex(va_list args);


int _printf(const char *format, ...);

/* edits */
int printrot13(va_list list);
int revstring(va_list list);
int get_length(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char *format, int *i, va_list list);
int get_flags(const char *format, int *i);
#endif /* MAIN_H */
