#include "main.h"

/**
 * handleNum - handle printing the numbers (intgers).
 * @args: va_list.
 * Return: int.
*/

int handleNum(va_list args)
{
int num = va_arg(args, int);
int counter = 0, divisor = 1, temp, digit;

temp = num;
if (num == 0)
{
_putchar('0');
return (1);
}
if (num < 0)
{
_putchar('-');
counter++;
num = -num;
}
while (temp /= 10)
divisor *= 10;
while (divisor > 0)
{
digit = num / divisor;
_putchar(digit + '0');
num %= divisor;
divisor /= 10;
counter++;
}
return (counter);
}
