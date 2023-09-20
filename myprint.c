#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - it's a printf like function
 * @format: the format that's gonna be printed
 *
 * Return: 0 in success
 */

int _printf(const char *format, ...)
{

	va_list args;
	va_start(args, format);

	while (*format)
	{
	if (*format == '%')
	{
	format++;

	if (*format == 'c')
	{

	int character = va_arg(args, int);
	putchar(character);
	}
	else if (*format == 's')
	{

	char *str = va_arg(args, char *);
	fputs(str, stdout);
	}
	else if (*format == '%')
	{

	putchar('%');
	}
	else
	{

	putchar('%');
	putchar(*format);
	}
	}
	else
	{
	putchar(*format);
	}
	format++;
	}

	va_end(args);
	return (0);
}

int main(void)
{
	char myChar = 'A';
	char *myString = "First ALX project, here we go!";

	_printf("This is a character: %c\n", myChar);
	_printf("This is a string: %s\n", myString);
	_printf("A literal percent sign: %%\n");

	return (0);
}


