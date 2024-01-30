#include "main.h"
/**
 * get_func - gets the handle function.
 * @s: char.
 * Return: functoin.
*/
int (*get_func(char s))(va_list)
{
int i = 0;
fmt ar[] = {
{'s', handleString},
{'c', handleCharacter},
{'i', handleNum},
{'d', handleNum}
};
if (s == ' ' || s == '\0')
{
return (NULL);
}
while (i < 4)
{
if (ar[i].sp == s)
{
return (ar[i].f);
}
i++;
}
return (NULL);
}
