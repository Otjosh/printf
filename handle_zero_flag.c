#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * handle_zero_flag - Handles the '0' format specifier
 * @args: The va_list containing the arguments
 *
 * Return: The number of characters printed.
 */
int handle_zero_flag(va_list args)
{
    int char_count = 0;
    char c;

    while ((c = va_arg(args, int)))
    {
        if (c == '%')
        {
            write(1, "0", 1);
            char_count++;
        }
        else
        {
            write(1, &c, 1);
            char_count++;
        }
    }

    return char_count;
}
