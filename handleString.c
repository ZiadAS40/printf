#include "main.h"

/**
 * handleString - print string and get length.
 * @args: va_list.
 * Return: int.
*/

int handleString(va_list args)
{
char *str;
int i = 0, len;

str = va_arg(args, char *);
if (str == NULL)
{
str = "(null)";
len = strlen(str);
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
return (len);
}
else
{
len = strlen(str);
for (i = 0; i < len; i++)
{
putchar(str[i]);
}
return (len);
}
}
