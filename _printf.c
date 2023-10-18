#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int printed_chars = 0;
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && *(format + 1))
        {
            format++;
            if (*format == 'c')
            {
                char c = va_arg(args, int);
                printed_chars += write(1, &c, 1);
            }
            else if (*format == 's')
            {
                char *s = va_arg(args, char *);
                printed_chars += write(1, s, _strlen(s));
            }
            else if (*format == '%')
            {
                printed_chars += write(1, "%", 1);
            }
        }
        else
        {
            printed_chars += write(1, format, 1);
        }
        format++;
    }
    va_end(args);
    return printed_chars;
}
