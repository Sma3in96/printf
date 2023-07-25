#include "main.h"
/**
 * add_str_buffer - print a string
 * @str: pointer to a string
 *
 * Return: number of char printed
 */
int add_str_buffer(char *str, char *buffer, int index)
{
	unsigned int i = 0, j = 0;
	char nothing[]= "(null)";

	if (str == NULL)
	{
		while (nothing[j] != '\0')
		{
			index = add_to_buffer(nothing[j], buffer, index);
			j++;
		}
		return (j);
	}
	while (str[i] != '\0')
	{
		index = add_to_buffer(str[i], buffer, index);
		i++;
	}
	return (index);
}
