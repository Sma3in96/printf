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
	int i;

	va_start(ar, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			switch(format[i + 1])
			{
				case 'c':
					printchar(va_arg(ar, int));
					i++;
					break;
			}
			printchar(format[i]);
		}
		else
		{
			printchar(format[i]);
		}
		i++;
	}
	va_end(ar);
	return i;
}
