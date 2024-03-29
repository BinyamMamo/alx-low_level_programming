#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void sep(int i);

/**
 * print_all - print all
 * @format: first input
 * @...: second input
 *
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	int i = -1;
	va_list args;
	char *s, *str = "cifs";

	switch (format == NULL)
	case 1:
		return;
	va_start(args, format);
	while (format[i + 1] != 0)
	{
		i++;
		if (strchr(str, format[i]) == NULL)
			continue;
		if (strchr(str, format[i]) != NULL)
			sep(i);
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
			switch (s == NULL)
			{
			case 1:
				printf("(nil)");
				break;
			case 0:
				printf("%s", s);
			}
		}
	}
	printf("\n");
	va_end(args);
}
/**
 * sep - sep
 * @i: second input
 *
 * Return: nothing
 */
void sep(int i)
{
	switch (i != 0)
	case 1:
		printf(", ");
}
