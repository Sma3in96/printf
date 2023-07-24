#include "main.h"
/**
 * _printf - our version of printf
 * @format: format of print
 * @...: the rest of arg
 *
 * Return: number of printed char
 */
int _printf(const char *format, ...)
{
	va_list ar;
	int index = 0, i = 0;
	char* buffer;

	va_start(ar, format);
	if (!format)
		return (-1);
	if (!format[i])
		return (0);
	buffer = malloc(1024 * sizeof(char));
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case '\0':
					index = add_to_buffer(format[i], buffer, index);
					break;
				case 'c':
					index = add_to_buffer(va_arg(ar, int), buffer, index);
					break;
				case 's':
					index = add_str_buffer(va_arg(ar, char*), buffer, index);
					break;
				case '%':
					index = add_to_buffer(format[i + 1], buffer, index);
					break;
				case 'd':
					index = add_int_buffer(va_arg(ar, int), buffer, index);
					break;
				case 'i':
					index = add_int_buffer(va_arg(ar, int), buffer, index);
					break;
				default:
					index = add_to_buffer(format[i], buffer, index);
					break;
			}
			i++;
		}
		else
			index = add_to_buffer(format[i], buffer, index);
		i++;
	}
	printbuffer(buffer, index),va_end(ar),free(buffer);
	return (index);
}
