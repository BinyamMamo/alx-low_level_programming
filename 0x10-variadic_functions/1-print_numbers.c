#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum them all
 * @n: first input
 * @...: second input
 *
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (separator == NULL || n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
