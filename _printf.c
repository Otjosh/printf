#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom implementation of printf function.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, char_count = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{

	if (format[i] != '%')
	{
		write(1, &format[i], 1);
		char_count++;
	}

	else
	{
		i++; /* Move past '%' */

		if (format[i] == 'c')
		{
			char c = va_arg(args, int);

			write(1, &c, 1);
			char_count++;
		}

		else if (format[i] == 's')
		{

			char *str = va_arg(args, char *);

			if (str == NULL)
		{
			str = "(null)";
		}

		while (*str)
		{
			write(1, str, 1);
			str++;
		char_count++;
		}
		}

		else if (format[i] == '%')
		{
			write(1, "%", 1);
			char_count++;
		}

		else
		{
			write(1, "%", 1);
			char_count++;
			write(1, &format[i], 1);
			char_count++;
		}
	}
	}

	va_end(args);

	return (char_count);
}
