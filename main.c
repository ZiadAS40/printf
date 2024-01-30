#include "main.h"
/**
 * main - test printf.
 *
 * Return: always 0
*/
int main(void)
{
  int i , j ;
 i = _printf("Hello, world!\n");
 j = printf("Hello, world!\n");
_printf("Combine %s and %s\n", "string1", "string2");
_printf("String: %s, Character: %c\n", "Hello", 'A');
_printf("Percentage: %%\n");
_printf("%s\n", "");
printf("%s\n", "");
_printf("%s\n", NULL);
_printf("%c\n", '\0');
printf("%c\n", '\0');
_printf("100%% sure\n");
_printf("Percent % here %\n");
_printf("Incomplete format specifier %\n");
_printf("Just a % with nothing\n");
_printf(NULL);
_printf("Non-printable: %s\n", "\x01\x02\x03");
printf("Non-printable: %s\n", "\x01\x02\x03");
_printf("Line1\nLine2\nLine3\n");
_printf("%d%k%i%e\n", 234,424);
printf("%d\n", i);
printf("%d\n", j);
return (0);
}
