#include "main.h"

/**
 * handleString - print string and get length.
 * @args: va_list.
 * Return: int.
*/

int handleString(va_list args)
{
char *str = va_arg(args, char *);
int i = 0, j;
int len;
if (str == NULL)
{
str = "(null)";
len = strlen(str);
for (j = 0; j < len; j++)
{
_putchar(str[j]);
}
return (len);
}
if (str != NULL)
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
