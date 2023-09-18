#include "main.h"

/**
 * _printf - it's a printf like function
 * @format: the format that's gonna be printed
 *
 * Return: 0 in success
 */

int _printf(const char *format, ...)
{
	int i = 0;
	char iValue, per = '%';
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
				write(1, &iValue, 1);
				break;
			}
			case 's':
			{
				int x = 0;
				char *sValue  = va_arg(argus, char *);

				while (sValue[x])
				{
					write(1, &sValue[x], 1);
					x++;
				} break;
			}
			case '%':
				write(1, &per, 1);
				break;
			}
		} else
			write(1, &format[i], 1);
		i++;
	}
	va_end(argus);
	return (i);
}
