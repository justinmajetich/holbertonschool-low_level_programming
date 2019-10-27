#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *buffer;

	va_start(args, format);
	/* loop until null-byte */
	while (format[i])
	{
		if (i && (format[i - 1] == 'c' || format[i - 1] == 'i'
		|| format[i] == 'f' || format[i] == 's') && 
		(format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's'))
			printf(", ");
		
		/* print according to format specifier */
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				buffer = va_arg(args, char *);
				if (buffer)
				{
					printf("%s", buffer);
					break;
				}
				printf("(nil)");
		}
		i++;
	}
	/* free args */
	va_end(args);

	printf("\n");
}
