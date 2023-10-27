#include <stdio.h>
#include <stdarg.h>

/**
 * handle_specifier - Handles a format specifier
 * @specifier: The format specifier to handle
 * @args: The va_list containing the arguments
 *
 * Return: The number of characters printed
 */

int handle_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
		char c = va_arg(args, int);

		putchar(c);
		return (1);

	case 's':
		char *str_arg = va_arg(args, char *);

		while (*str_arg)
		{
			putchar(*str_arg);
			str_arg++;
		}

		return (0);

	case '%':
		putchar('%');
		return (1);
		default:

		return (0);
	}
}
