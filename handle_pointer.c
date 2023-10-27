#include <stdio.h>
#include <stdarg.h>

/**
 * handle_pointer - Handles the p specifier (prints the address of a pointer).
 * @args: The va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int handle_pointer(va_list args)
{
	void *ptr = va_arg(args, void *);
	int char_count = 0;

	putchar('0');
	putchar('x');

	for (int i = sizeof(void *) * 2 - 1; i >= 0; i--)
	{
		int digit = ((uintptr_t)ptr >> (i * 4)) & 0xF;

		if (digit < 10)
		putchar('0' + digit);
	else
		putchar('a' + digit - 10);
	char_count++;
	}

	return (char_count);
}
