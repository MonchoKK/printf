#include "main.h"

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
				putchar(iValue);
				break;
			}
			case 's':
			{
				char *sValue  = va_arg(argus, char *) + '\0';
				puts(sValue);
				break;
			}
			case '%':
			{
				putchar('%');
				break;
			}
			default:
			{
				break;
			}
			}
		}
		else
		{
			putchar(format[i]);

		}
		i++;
	}

	va_end(argus);
}

int main()
{
	int x = 20;
	_printf("hello, %s %c %%", "How are you", 'K');
	return (0);
}
