#include "main.h"
/**
 * printchar - putchar
 * @c: char
 *
 * Return: 1
 */
int printchar(char c)
{
	write(1, &c, 1);
	return (1);
}
