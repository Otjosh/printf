#include <stdio.h>
#include <stdarg.h>

/**
 * handle_binary - Handles the binary specifier (b).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_binary(va_list args)
{
	unsigned int value = va_arg(args, unsigned int);
	int char_count = 0;
	int i, binary[32];

	if (value == 0)
	{
		putchar('0');
		char_count++;
		return (char_count);
	}

	for (i = 0; i < 32; i++)
	{
		binary[i] = (value >> i) & 1;
	}

	for (i = 31; i >= 0; i--)
	{
		if (binary[i] == 1)
			break;
	}

	for (; i >= 0; i--)
	{
		putchar(binary[i] + '0');
		char_count++;
	}

	return (char_count);
}
