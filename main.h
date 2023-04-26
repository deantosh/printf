#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct format_specifier - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/

struct format_specifier
{
	char *sym;
	int (*f)(va_list);
};
typedef struct format_specifier f_s;

/*MAIN FUNCTIONS*/
int _write_char(char c);
int _printf(const char *format, ...);
int parser(const char *format, f_s f_s_list[], va_list arg_list);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_integer(va_list list);
int unsigned_integer(va_list list);
int print_number(va_list args);
int print_unsigned_number(unsigned int n);
int print_reversed(va_list arg);
int rot13(va_list list);
int print_heX(va_list list);
int print_hex(va_list list);
int print_octal(va_list list);
int print_binary(va_list list);

/*HELPER FUNCTIONS*/
int hex_check(int num, char x);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int base_len(unsigned int num, int base);
void write_base(char *str);
char *rev_string(char *s);

#endif /*PRINTF_H*/
