#include "main.h"

/**
 * _printf - it's a printf like function
 * @format: the format that's gonna be printed
 *
 * Return: 0 in success
 */

int _printf(const char *format, ...)
{
	int i = 0, iValue;
	va_list argus;

	va_start(argus, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
			{
				iValue  = va_arg(argus, int);
				_putchar(iValue);
				break;
			}
			case 's':
			{
				int x = 0;
				char *sValue  = va_arg(argus, char *) + '\0';

				while (sValue[x])
				{
					_putchar(sValue[x]);
					x++;
				} break;
			}
			case '%':
			{
				_putchar('%');
				break;
			}
			}
		} else
			_putchar(format[i]);
		i++;
	}
	va_end(argus);
	return (i - 1);
}
