#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - it's a printf like function
 * @format: the format that's gonna be printed
 * @main - function to be used
 * Return: 0 in success
 */

int _printf(const char *format, ...);

{
	va_list args;

	va_start(args, format);

	while (*format)
		if (*format == '%')
		{
		format++;
		if (*format == 'c')
		_putchar(va_arg(args, int));
		else if (*format == 's')
		printf("%s", va_arg(args, char*));
		else if (*format == '%')
		_putchar('%');
		}
		else
		_putchar(*format);
		format++;

		va_end(args);
}

int main(void);

{
	printf("First ALX team project\n");
	return (0);
}
