#include <stdio.h>
#include <stdarg.h>

/**
 * handle_hex_uppercase - Handles the X specifier (hexadecimal, uppercase).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_hex_uppercase(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	printf("%X", value);
	return (0);
}
