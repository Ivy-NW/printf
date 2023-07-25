#ifndef PRINTF_H
#define PRINTF_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *struct print_a - A struct that has a pointer character and a pointer
 *to a function
 *@s: a character pointer
 *@f: a function pointer
 */
typedef struct print_a
{
	char s;
	int (*f)();
} print_a_t;
int check_formatter(va_list args, const char *format, print_a_t print_a[]);
int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
void a_struct(void);
int print_per(int p);
int print_rev(va_list args);
#endif
