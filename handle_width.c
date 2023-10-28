#include <stdio.h>
#include <stdarg.h>

/**
 * handle_field_width - Handles field width for non-custom conversion specifier
 * @args: The va_list containing the arguments.
 * @width: The specified field width.
 *
 * Return: The number of characters printed.
 */

int handle_field_width(va_list args, int width)
{
	int value = va_arg(args, int);
	int char_count = 0;

	int num_width = 0;
	int temp = value;

	while (temp != 0)
	{
		temp /= 10;
		num_width++;
	}

	while (num_width < width)
	{
		putchar(' ');
		char_count++;
		num_width++;
	}

	printf("%d", value);
	char_count += num_width;
	return (char_count);
}
