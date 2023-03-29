#include "main.h"
#include <stdarg.h>

/**
 * print_binary - prints a given integer from variadic parameters to binary
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 */

int print_binary(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	int count = 0, i;
	int binary_digits[100];

	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; number > 0; i++)
	{
		binary_digits[i] = number % 2;
		number = number / 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar('0' + binary_digits[i]);
		count++;
	}

	return (count);
}
