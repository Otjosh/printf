#include <stdio.h>
#include <stdarg.h>

/**
 * handle_string_S - Handles the S specifier (prints non-printable characters).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_string_S(va_list args)
{
	char *str = va_arg(args, char *);
	int char_count = 0;

	if (str == NULL)
	{
		return (char_count);
	}

	while (*str)
	{
		if (*str < 32 || *str >= 127)
	{
		putchar('\\');
		putchar('x');
		if (*str < 16)
		{
			putchar('0');
		}
		printf("%X", *str);
		char_count += 3;
	}
	else
	{
		putchar(*str);
		char_count++;
	}
	str++;
	}

	return (char_count);
}
