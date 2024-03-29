#include <stdarg.h>

/**
 * sum_them_all - sum them all
 * @n: first input
 * @...: second input
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}
