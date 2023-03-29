#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _printf - prints a string in a formatted way
 * @format: string to print (char *)
 * @...: variadic parameters (unknown)
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int (*f)(va_list);
	int i = 0;
	int count = 0;
	va_list args;

	va_start(args, format);


	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				count += f(args);
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] != '\0')
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				count += 2;
				i = i + 2;
			}
		}
	} va_end(args);
	return (count);
}
