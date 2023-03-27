#include "main.h"
#include <stdarg.h>
/**
 * print_pcent - prints character % to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_pcent(va_list args)
{
	(void)args;

	_putchar('%');

	return (1);
}
