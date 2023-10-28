#include "main.h"
#include <stdint.h>
#include <unistd.h>

/**
 * handle_pointer - Handles the conversion specifier 'p' for pointers.
 * @args: The va_list that contains the pointer.
 *
 * Return: The number of characters printed.
 */
int handle_pointer(va_list args)
{
    uintptr_t ptr = (uintptr_t)va_arg(args, void *);
    int char_count = 0;
    int i;

    for (i = sizeof(void *) * 2 - 1; i >= 0; i--)
    {
        int digit = (ptr >> (i * 4)) & 0xF;
        char digit_char;

        if (digit < 10)
            digit_char = digit + '0';
        else
            digit_char = digit - 10 + 'a';

        write(1, &digit_char, 1);
        char_count++;
    }

    return char_count;
}
