#include "main.h"
/**
 * add_to_buffer - putchar
 * @c: char
 * @buffer: buffer
 * @index: actual index
 *
 * Return: 1
 */
int add_to_buffer(char c, char *buffer, int index)
{
	if (index ==  1024)
	{
		printbuffer(buffer, index);
		index = 0;
	}
	buffer[index] = c;
	index++;
	return (index);
}
