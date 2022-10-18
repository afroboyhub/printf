#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct fmt - struct op
 *
 * @fmt: the format
 * @fn: the function
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - struct op
 *
 * @fmt: the format
 * @fm_t: the function
 */

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int size, int precision);

/**
 * function to print chars and strings
 */

int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_percent(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_int(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_binary(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_ocatl(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_hexa_upper(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_hexa(va_list types, char buffer[], int flags, int width, int size, int precison, char map_to[], char flag_ch);
int print_non_printable(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_pointer(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_reverse(va_list types, char buffer[], int flags, int width, int size, int precision);
int print_rot13string(va_list types, char buffer[], int flags, int width, int size, int precision);
int handle_write_char(char buffer[], int flags, int width, int size, int precision, char c);
int write_number(int is_positive, int ind, char buffer[], int flags, int width, int size, int precision);
int write_num(int ind, char bff[], int flags, int width, int precision, int length, char padd, char extra_c);
int write_pointer(int ind, char buffer[], int flags, int width, int length, int padd_start, char padd, char extra_c);
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int write_unsigned(int is_negative, int ind, char buffer[], int flags, int width, int precision, int size);

int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsigned(unsigned long int num, int size);


#endif /* MAIN_H */
