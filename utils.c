#include "main.h"

/**
 * is_printable - evaluates if a char is printable
 * @c: char to be evaluated
 *
 * Return: 1 if c is printable 0 if not
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	rturn (0);
}

/**
 * append_hex_code - append ascii in hexa code to buffer
 * @buffer: array of chars
 * @i: index at which to start appending
 * @ascii_code: ascii code
 * Retur: 3
 */

int append_hex_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * convert_size_number - casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating the type 
 *
 * Return: casted value
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsigned - casts a number to the specified size
 * @num: number to be casted
 * @size: number indicating the type
 *
 * Return: casted value of num
 */

long int convert_size_unsigned(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
