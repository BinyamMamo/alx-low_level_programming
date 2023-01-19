#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - print all
 * @format: first input
 * @...: second input
 *
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	va_list args;
	char *str = "cifs";

	va_start(args, format);

	for (i = 0; format[i] != 0; i++)
	{
		if (strchr(str, format[i]) == NULL)
			continue;
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
		if (format[i + 1] != 0)
			printf(", ");
	}

	printf("\n");
	va_end(args);
}
