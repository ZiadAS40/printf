#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - imitaing printf form standard library.
 * @format: string.
 *
 * Return: intger.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *string;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			if (format[i - 1] != '%')
			{
				putchar (format[i]);
			}
		} else
		{
			switch (format[i + 1])
			{
				case 'c':
					putchar (va_arg(args, int));
					break;
				case 's':
					string = va_arg(args, char *);
					while (string[j] != '\0')
					{
						putchar(string[j]);
						j++;
					}
					break;
				case '%':
					putchar ('%');
					break;
			}
		}
		i++;
	}
	if (format[i] == 'n' && format[i - 1] == '\\')
	{
		putchar('\n');
	}
	return (i);
}
