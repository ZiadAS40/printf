#include "main.h"
/**
 * handleUnsigned - handling %u conversion.
 * @args: va_list.
 * Return: intger.
*/

int handleUnsigned (va_list args)
{
long num = va_arg(args,  unsigned int);
int counter = 0, digit;
unsigned int divisor = 1;
long temp = num;

if (temp == 0)
{
_putchar('0');
return (1);
}
if (temp < 0)
{
num = UINT_MAX;
temp = UINT_MAX;
}
while (temp /= 10)
{
divisor *= 10;
}
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
 * handleOct - handle the convertion %o -> to Octa
 * @args: va_list.
 *
 * Return: intger.
*/

int handleOct(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int octalNum[32];
int i = 0, j;

if (num == 0)
{
putchar('0');
return (1);
}
while (num > 0)
{
octalNum[i] = num % 8;
num /= 8;
i++;
}
for (j = i - 1; j >= 0; j--)
{
putchar(octalNum[j] + '0');
}
return (i);
}

/**
 * handleHex - handle the conversion %X.
 * @args: va_list.
 * Return: intger.
*/
int handleHex(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char result[32];
int i = 0, j, remainder;

if (num == 0)
{
_putchar('0');
return (1);
}

while (num != 0)
{
remainder = num % 16;
result[i++] = (remainder < 10) ? remainder + '0' : (remainder - 10 + 'A');
num /= 16;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(result[j]);
}
return (i);
}

/**
 * handlehex - handle the conversion %x.
 * @args: va_list.
 * Return: intger.
*/

int handlehex(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char result[32];
int i = 0, j, remainder;

if (num == 0)
{
_putchar('0');
return (1);
}

while (num != 0)
{
remainder = num % 16;
result[i++] = (remainder < 10) ? remainder + '0' : (remainder - 10 + 'a');
num /= 16;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(result[j]);
}
return (i);
}
