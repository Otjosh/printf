#include <stdio.h>
#include <stdarg.h>

/**
 * handle_octal - Handles the o specifier (octal).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */
int handle_octal(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);

	printf("%o", value);
	return (0);
}
