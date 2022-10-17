void _printf(char *format, ...)
{
	char *traverse;
	unsigned int i;
	char *s;

	va_list arg;

	va_start(arg, format);

	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while ( *traverse != '%' )
		{
			_putchar(*traverse);
			traverse++;
		}

		traverse++;

		switch(*traverse)
		{
			case 'c' : i = va_arg(arg, int);
				   _putchar(i);
				   break;

			case 'd' : i = va_arg(arg, int);
				   if (i < 0)
				   {
					   i = - i;
					   _putchar('-');
				   }
				   puts(convert(i, 10));
				   break;

			case 'o' : i = va_arg(arg, unsigned int);
				   puts(convert(i, 8));
				   break;

			case 's' : s = va_arg(arg, char *);
				   puts(s);
				   break;

			case 'x' : i = va_arg(arg, unsigned int);
				   puts(convert(i, 16));
				   break;
		}
	}
	va_end(arg);
}
