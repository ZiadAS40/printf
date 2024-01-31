
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
/**
 * struct sp_func_struct - typedef structure.
 *
 * @sp: char.
 * @f: function.
**/
typedef struct sp_func_struct
{
char sp;
int (*f)(va_list);
} fmt;



/*
 * functions prototype
*/
int _printf(const char *format, ...);
int _putchar(char);
int (*(get_func(char)))(va_list);
int handleString(va_list);
int handleCharacter(va_list);
int handleNum(va_list);
int _handle_print(int, const char *, int *, va_list);
int _check_fmt(const char *fmt);
#endif
