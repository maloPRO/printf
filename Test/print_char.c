#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a character to stdout.
 * @args: variadic argument
 *
 * Return: the number of characters printed
 */

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	if (c != '\0')
	{
		_putchar(c);
		return (1);
	}

	return (0);
}
