#include <stdio.h>
#include <stdarg.h>

/**
 * handle_plus_flag - Handles the + flag for numeric specifiers (d, i).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_plus_flag(va_list args)
{
	int value = va_arg(args, int);
	int char_count = 0;

	if (value >= 0)
	{
		putchar('+');
		char_count++;
	}

	printf("%d", value);
	return (char_count);
}

/**
 * handle_space_flag - Handles the space flag for numeric specifiers (d, i).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_space_flag(va_list args)
{
	int value = va_arg(args, int);
	int char_count = 0;

	if (value >= 0)
	{
		putchar(' ');
		char_count++;
	}

	printf("%d", value);
	return (char_count);
}

/**
 * handle_hash_flag - Handles the # flag for numeric specifiers (o, x, X).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_hash_flag(va_list args)
{
	int value = va_arg(args, int);
	int char_count = 0;

	if (value != 0)
	{
		putchar('0');
		char_count++;
	}

	printf("%x", value);
	return (char_count);
}
