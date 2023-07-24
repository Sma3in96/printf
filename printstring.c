#include "main.h"
/**
 * add_str_buffer - print a string
 * @str: pointer to a string
 *
 * Return: number of char printed
 */
int add_str_buffer(char *str, char *buffer, int index)
{
	int i = 0;

	while (str[i] != '\0')
	{
		index = add_to_buffer(str[i], buffer, index);
		i++;
	}
	return (index);
}
