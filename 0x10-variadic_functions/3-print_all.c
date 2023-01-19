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
	char *s;
	char *str = "cifs";

	if (format == NULL)
		return;

	va_start(args, format);

	i = 0;
	while (format[i] != 0)
	{
		if (strchr(str, format[i]) == NULL)
		{
			i++;
			continue;
		}
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
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		}
		if (format[i + 1] != 0)
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(args);
}
