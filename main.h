#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct format - A struct to hold format specifiers and functions
 * @spec: The format specifier (e.g., "c", "s")
 * @f: The corresponding function to handle the specifier
 */
typedef struct format
{
	char *spec;
	int (*f)(va_list);
} format_t;

int _printf(const char *format, ...);
int _putchar(char c);

/* Format specifier handling functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif /* MAIN_H */
