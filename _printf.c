#include "main.h"
/**
 * _printf - our printf
 * @format: str
 * @...:
 * Return: int
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, index = 0, nubchar = 0;
	va_list ar;
	char *buffer;

	va_start(ar, format);
	if (!format || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	if (format[i] == '\0')
		return (0);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case '\0':
				printbuffer(buffer, index);
				free(buffer);
				va_end(ar);
				break;
			case 'c':
				nubchar += add_to_buffer(va_arg(ar, int), buffer, index);
				i++;
				break;
			case 's':
				nubchar += add_str_buffer(va_arg(ar, char *), buffer, index);
				i++;
				break;
			case 'i':
				nubchar += add_int_buffer(va_arg(ar, int), buffer, index);
				i++;
				break;
			case 'd':
				nubchar += add_int_buffer(va_arg(ar, int), buffer, index);
				i++;
				break;
			case '%':
				nubchar += add_to_buffer('%', buffer, index);
				i++;
				break;
			default :
				nubchar += add_to_buffer(format[i], buffer, index);
				break;
			}
		}
		else
			nubchar += add_to_buffer(format[i], buffer, index);
		i++;
	}
	printbuffer(buffer, index);
	free(buffer);
	va_end(ar);	
	return (nubchar);
}
