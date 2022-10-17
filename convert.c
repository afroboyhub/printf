#include "main.h"

/**
 * convert - converts oct, hex, dec to binary
 * @num: number to be converted
 * @base: base of num
 *
 * Return: pointer to base
 */

char *convert(unsigned int num, int base)
{
	static char Rep[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = Rep[num%base];
		num /= base;
	}
	while (num != 0);

	return(ptr);
}
