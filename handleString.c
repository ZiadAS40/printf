#include "main.h"

/**
 * handleString - print string and get length.
 * @args: va_list.
 * Return: int.
*/

int handleString(va_list args)
{
char *str = va_arg(args, char *);
int i = 0;
if (str[i] != '\0')
{
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
return (0);
}
