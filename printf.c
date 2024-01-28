#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf - imitaing printf form standard library.
 * @format: string.
 *
 * Return: intger.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, counter = 0;
	char *string;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				putchar(va_arg(args, int));
				counter++;
			} else if (format[i] == 's')
			{
				string = va_arg(args, char *);
				if (string != NULL && isValidString(string))
				{
					while (*string != '\0')
					{
						putchar(*string);
						string++;
						counter++;
					}
				} else
				{
					return (-1);
				}
			} else if (format[i] == '%')
			{
				putchar('%');
				counter++;
			}
		} else
		{
			putchar(format[i]);
			counter++;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
