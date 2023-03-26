#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include "main.h"

/**
* _printf - produces output according to a format.
* @format: character string
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{

	int count = 0;
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			++format;
			if (*format == 'c')
			{
				char c = (char)va_arg(args, int);

				_putchar(c);
				++count;
			}
			else if (*format == 's')
			{
				char *s = va_arg(args, char *);

				fputs(s, stdout);
				count += strlen(s);
			}
			else if (*format == '%')
			{
				_putchar('%');
				++count;
			}
			else
			{
				_putchar(*format);
				++count;
			}
			++format;
		}
	}
	va_end(args);
	return (count);
}
