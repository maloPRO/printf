#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_str - prints a variadic string each per time to stdout
 * @args: variadic parameter
 * Return: number of characters printed on Success
 * upon failure -1
 */
int print_str(va_list args)
{
	int count = 0;
	int i;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
