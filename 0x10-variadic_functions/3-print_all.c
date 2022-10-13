#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - print anything
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	size_t i;
	va_list ap;
	char *arg;

	i = 0;
	va_start(ap, format);
	while (format && i < strlen(format))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				arg = va_arg(ap, char *);
				if (arg == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", arg);
				break;
			default:
				i++;
				continue;
		}
		if (i != (strlen(format) - 1))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}
