#include <stdio.h>
#include <stdarg.h>

/**
 * handle_hex_lowercase - Handles the x specifier (hexadecimal, lowercase).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int handle_hex_lowercase(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	printf("%x", value);
	return (0);
}
