#include "main.h"
/**
 * handleCharacter - print character.
 * @args: va_list.
 * Return: int.
*/
int handleCharacter(va_list args)
{
int ch = va_arg(args, int);
if (ch != 0)
{
_putchar(ch);
return (1);
}
return (-1);
}
