#include <stdio.h>
#include <stdarg.h>

/**
 * handle_precision - Handles precision for non-custom conversion specifiers
 * @args: The va_list containing the arguments.
 * @precision: The specified precision.
 *
 * Return: The number of characters printed.
 */

int handle_precision(va_list args, int precision)
{
	int value = va_arg(args, int);
	int char_count = 0;

	if (precision > 0)
	{
		printf("%.*d", precision, value);
		char_count += precision;
	}

	else if (precision == 0 && value == 0)
	{
		return (char_count);
	}
	else
	{
		printf("%d", value);
		char_count++;
	}

	return (char_count);
}
