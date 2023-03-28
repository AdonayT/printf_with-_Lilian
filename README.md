0x11. C - printf

_printf is a custom implementation of the C programming function printf. 

Prototype: int _printf(const char *, ...);

Project Requirements

All files will be compiled on Ubuntu 14.04 LTS
Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
Code must follow the Betty style
Global variables are not allowed
Authorized functions and macros:
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

Mandatory Tasks

 Write function that produces output with conversion specifiers c, s, and %.
 Handle conversion specifiers d, i.
 Create a man page for your function.
 
Advanced Tasks

 Handle conversion specifier b.
 Handle conversion specifiers u, o, x, X.
 Use a local buffer of 1024 chars in order to call write as little as possible.
 Handle conversion specifier S.
 Handle conversion specifier p.
 Handle flag characters +, space, and # for non-custom conversion specifiers.
 Handle length modifiers l and h for non-custom conversion specifiers.
 Handle the field width for non-custom conversion specifiers.
 Handle the precision for non-custom conversion specifiers.
 Handle the 0 flag character for non-custom conversion specifiers.
 Handle the custom conversion specifier r that prints the reversed string.
 Handle the custom conversion specifier R that prints the rot13'ed string.
 All above options should work well together.
