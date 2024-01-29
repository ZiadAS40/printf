#include "main.h"
/**
 * printf - custom printf
 * @format: string.
 *
 * Return: int .
*/

int _printf(const char *format, ...)
{
va_list args;
int i = 0, counter = 0;

va_start(args, format);
if (format == NULL)
{
return (-1);
}
if (!_check_fmt(format))
return (-1);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
counter += _handle_print(0, format, &i, args);
}
else
{
_putchar(format[i]);
counter++;
}
i++;
}
va_end(args);
return (counter);
}
/**
 * _handle_print - handle printing
 * @count: int.
 * @format: string.
 * @i: pointer.
 * @args: va_list.
 * Return: int.
*/
int _handle_print(int count, const char *format, int *i, va_list args)
{
int (*result_func)(va_list);
int result;
result_func = get_func(format[*i]);
if (format[*i] == '%')
{
_putchar('%');
return (1);
}
if (format[*i] != 's' && format[*i] != 'c' && format[*i] != '%')
{
_putchar('%');
_putchar(format[*i]);
return (2);
}
if (result_func != NULL)
{
result = result_func(args);
count += result;
}
else
{
return (-1);
}
return (count);
}
/**
 * _check_fmt - checks if error before pritnting.
 * @fmt: string.
 * Return: int .
*/
int _check_fmt(const char *fmt)
{
int i = strlen(fmt);
int j = 0;
while (fmt[0] != '\0')
{
if (fmt[j] == '%')
{
j++;
if (fmt[j] == ' ')
return (0);
if (fmt[j] == '\0' && j != i - 1)
return (0);
}
fmt++;
}
return (1);
}
