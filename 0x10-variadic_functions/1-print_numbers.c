#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: first input
 * @n: second input
 * @...: third input
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (separator == NULL || *separator == '\0' || n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
