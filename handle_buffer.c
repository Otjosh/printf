#include <stdio.h>
#include <stdarg.h>

/**
 * handle_buffer - Handles the buffer and write operations.
 * @buffer: The buffer to write to.
 * @size: The size of the buffer.
 * @content: The content to write.
 * @char_count: A pointer to the character count.
 *
 * Return: 0 if successful, -1 if an error occurs.
 */

int handle_buffer(char *buffer, int size, char *content, int *char_count)
{
	int i;

	if (*char_count >= size)
	{
		for (i = 0; i < size; i++)
		{
			putchar(buffer[i]);
		}
		*char_count = 0;
	}

	buffer[*char_count] = *content;
	(*char_count)++;

	return (0);
}
