#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * handle_rot13 - Handles the 'R' format specifier
 * @args: The va_list containing the arguments
 * @unused: An unused parameter required by the function pointer
 *
 * Return: The number of characters printed.
 */
int handle_rot13(va_list args, __attribute__((unused)) void *unused)
{
    int i;
    char *str = va_arg(args, char *);
    int char_count = 0;
    char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    if (str == NULL)
        str = "(null)";

    for (i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        char is_alpha = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
        char *pos = is_alpha ? (c >= 'a' ? strchr(rot13, c) : strchr(ROT13, c)) : NULL;

        if (pos)
        {
            char_count += write(1, pos, 1);
        }
        else
        {
            char_count += write(1, &c, 1);
        }
    }

    return char_count;
}
