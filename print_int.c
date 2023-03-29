#include "main.h"

/**
 * print_int - prints an integer
 * @args: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_int(va_list args, char *buf, unsigned int ibuf)
{
	int input;
	unsigned int j, temp, i, div, isneg;

	input = va_arg(args, int);
	isneg = 0;
	if (input < 0)
	{
		j = input * -1;
		ibuf = handl_buf(buf, '-', ibuf);
		isneg = 1;
	}
	else
	{
		j = input;
	}

	temp = j;
	div = 1;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = handl_buf(buf, ((j / div) % 10) + '0', ibuf);
	}
	return (i + isneg);
}
