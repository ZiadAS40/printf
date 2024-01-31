#include "main.h"
#include <math.h>


/**
 * handleNum - handle printing the numbers (intgers).
 * @args: va_list.
 * Return: int.
*/

int handleNum(va_list args)
{
long num = va_arg(args, int);
int counter = 0, temp, digit;
long divisor = 1;

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

/**
 * handleBinary - handle custom convertion %b.
 * @args: va_list.
 * Return: int.
*/

int handleBinary(va_list args)
{
long num = va_arg(args, unsigned int);
long powerOfTwo;
int power = sizeof(unsigned int) * 8 - 1, counter = 0, flag = 0;

if (num == 0)
{
_putchar('0');
_putchar('0');
return (1);
}
while (power >= 0)
{
powerOfTwo = _pow(2, power);
if (num >= powerOfTwo)
{
_putchar('1');
num -= powerOfTwo;
flag = 1;
counter++;
}
else if (flag)
{
_putchar('0');
counter++;
}
power--;
}
return (counter > 0 ? counter - 1 : 0);
}

/**
 * _pow - get the power on two numbers.
 * @base: intger.
 * @exp: intger.
 * Return: intger.
*/
long _pow(int base, int exp)
{
long result  = 1;

while (exp > 0)
{
result *= base;
exp--;
}
return (result);
}
