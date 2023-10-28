#include "main.h"
#include <unistd.h>

/**
 * handle_minus_flag - Handles the '-' flag for left alignment.
 * @value: The value to print.
 * @width: The specified width.
 *
 * Return: The number of characters printed.
 */
int handle_minus_flag(int value, int width)
{
    int char_count = 0;
    char minus = '-';
    int temp = value;
    int num_width = 0;

    if (value < 0)
    {
        write(1, &minus, 1);
        char_count++;
        value = -value;
    }

    while (temp > 0)
    {
        temp /= 10;
        num_width++;
    }

    if (width > num_width)
    {
        int padding = width - num_width;
        char space = ' ';

        while (padding > 0)
        {
            write(1, &space, 1);
            char_count++;
            padding--;
        }
    }

    temp = value;

    while (temp > 0)
    {
        int digit = temp % 10;
        char digit_char = digit + '0';
        write(1, &digit_char, 1);
        char_count++;
        temp /= 10;
    }

    return char_count;
}
