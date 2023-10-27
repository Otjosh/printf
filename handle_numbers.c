#include <stdio.h>
#include <stdarg.h>

/**
 * handle_number - Handles the number specifiers (d, i).
 * @specifier: The format specifier (d or i).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_number(char specifier, va_list args)
{
	int value = va_arg(args, int);

	printf("%d", value);
	return (0);
}
