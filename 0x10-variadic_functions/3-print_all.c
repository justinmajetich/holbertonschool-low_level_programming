#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	/* initialize arg list */
	va_start(args, format);

	/* loop until null-byte */
	while (format[i])
	{
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
				printf("%s", va_arg(args, char *));
				break;
		}

		/* print separator after all but last arg */
		if ((format[i + 1]) && (format[i] == 'c'
		|| format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's'))
			printf(", ");

		i++;
	}

	/* free args */
	va_end(args);

	/* end with newline */
	printf("\n");
}
