#include "main.h"
/**
 * add_char_buffer - putchar
 * @c: char
 *
 * Return: 1
 */
int add_char_buffer(char c, char *buffer, int index)
{
	buffer[index] = c;
	index++;
	return (index);
}
