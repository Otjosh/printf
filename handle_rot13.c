#include <stdio.h>
#include <stdarg.h>

/**
 * handle_rot13 - Handles the R specifier (prints the rot13'ed string).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int char_count = 0;

	if (str == NULL)
	{
		return (char_count);
	}

	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		int offset = (c >= 'a' && c <= 'z') ? 'a' : 'A';

		putchar((c - offset + 13) % 26 + offset);
		char_count++;
	}
	else
	{
		putchar(c);
		char_count++;
	}
	}

	return (char_count);
}
