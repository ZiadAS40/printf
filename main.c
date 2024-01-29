#include "main.h"
int main(void)
{
int i , c, g;
printf("This is a string");
printf("%s\n", "I am a string too!");
printf("Character:[%c]\n",'H');
_printf("--------\n");
g = _printf("%%");
c = _printf("%k\n");
i = _printf("Character:[%c] , [% ]\n",'H');
printf("%d\n", i);
printf("%d\n", c);
printf("%d\n", g);
return (0);
}
