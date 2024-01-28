#include "main.h"
/**
 * isValidString - check the string.
 * @str: string.
 * Return: bool.
 */
bool isValidString(char *str)
{
	int i;
	if (str == NULL)
	{
		return (false);
	}
	for (i = 0; i < 1000; i++)
	{
		if (str[i] == '\0')
			return (true);
	}
	return (false);
}
