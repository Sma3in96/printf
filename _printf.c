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
	buffer = malloc(1024);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					index = add_char_buffer(va_arg(ar, int), buffer, index);
					break;
				case 's':
					index = add_str_buffer(va_arg(ar, char*), buffer, index);
					break;
				case '%':
					index = add_char_buffer(format[i + 1], buffer, index);
					break;
				default:
					index = add_char_buffer(format[i + 1], buffer, index);
					break;
			}
			i++;
		}
		else
		{
			index = add_char_buffer(format[i], buffer, index);
		}
		i++;
	}
	printbuffer(buffer, index);
	va_end(ar);
	return (index);
}
