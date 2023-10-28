#include <stdio.h>
#include <stdarg.h>

/**
 * handle_zero_flag - Handles the 0 flag for non-custom conversion specifiers.
 * @args: The va_list containing the arguments.
 * @value: The integer value.
 * @width: The specified field width.
 *
 * Return: The number of characters printed.
 */

int handle_zero_flag(va_list args, int value, int width)
{
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
		putchar('0');
		char_count++;
		num_width++;
	}

	printf("%d", value);
	char_count += num_width;
	return (char_count);
}
