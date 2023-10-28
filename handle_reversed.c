#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * handle_reversed - Handles the %r specifier
 * @args: The va_list containing the string
 *
 * Return: Number of characters printed
 */
int handle_reversed(va_list args)
{
	char *str = va_arg(args, char *);
	int char_count = 0;

	if (str == NULL)
		str = "(null)";

	int len = 0;
	while (str[len] != '\0')
		len++;

	for (int i = len - 1; i >= 0; i--)
	{
		char_count++;
		putchar(str[i]);
	}

	return char_count;
}
