#include <stdio.h>
#include <stdarg.h>

/**
 * handle_long_modifier - Handles the l length modifier for numeric specifiers.
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_long_modifier(va_list args)
{
	long value = va_arg(args, long);

	printf("%ld", value);
	return (0);
}

/**
 * handle_short_modifier - Handles the h length modifier for numeric specifiers
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_short_modifier(va_list args)
{
	short value = (short)va_arg(args, int);

	printf("%hd", value);
	return (0);
}

