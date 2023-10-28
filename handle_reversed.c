#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * handle_reversed - Handles the 'r' format specifier
 * @args: The va_list containing the arguments
 * @unused: An unused parameter required by the function pointer
 *
 * Return: The number of characters printed.
 */
int handle_reversed(va_list args, __attribute__((unused)) void *unused)
{
    int len, i;
    char *str = va_arg(args, char *);
    int char_count = 0;

    if (str == NULL)
        str = "(null)";

    len = 0;
    while (str[len])
        len++;

    for (i = len - 1; i >= 0; i--)
    {
        char_count += write(1, &str[i], 1);
    }

    return char_count;
}
