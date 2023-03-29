#include "main.h"
#include <stdarg.h>

/**
 * print_int - prints a given integer from variadic parameters
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 */

int print_int(va_list args)
{
	int i = 0;
	int count = 0;
	int number;
	int print_arr[10];

	number = va_arg(args, int);

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	if (number < 0)
	{
		_putchar('-');
		count++;
		number = -number;
	}
	while (number != 0)
	{
		print_arr[i] = (number % 10);
		number = number / 10;
		if (number == 0)
			break;
		i++;
	}

	for (i = i; i >= 0 && i < 10; i--)
	{
		_putchar('0' + print_arr[i]);
		count++;
	}
	return (count);
}
