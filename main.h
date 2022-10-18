#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct convert
{
	char *sym;
	int (*f)(va_list);
} conver_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_integer(va_list list);
int unsigned_integer(va_list list);
int print_percent(va_list list);
int print_unsgined_number(unsigned int n);
int print_number(va_list args);
char *rev_string(char *s);
void write_base(char *str);
int print_binary(va_list list);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_reversed(va_list arg);
int rot13(va_list list);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int hex_check(int num, char x);


#endif
