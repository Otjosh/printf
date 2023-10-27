#include <stdio.h>
#include <stdarg.h>

/**
 * handle_unsigned - Handles the u specifier (unsigned decimal).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int handle_unsigned(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	printf("%u", value);
	return (0);
}
