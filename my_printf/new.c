#include <unistd.h>
#include <stdio.h>
void print_hbo(unsigned int n, unsigned int hbo);
void print_byte(unsigned int n);
void print_hex(unsigned int);
void print_oct(unsigned int);

/**
 * print_byte - prints uint in binary form
 * @n: the uint to print
 *
 * Return: nothing
 */
void print_byte(unsigned int n)
{
	print_hbo(n, 2);
}

/**
 * print_oct - prints uint in octal form
 * @n: the uint to print
 *
 * Return: nothing
 */
void print_oct(unsigned int n)
{
	print_hbo(n, 8);
}

/**
 * print_hex - prints uint in hexadecimal form
 * @n: the uint to print
 *
 * Return: nothing
 */
void print_hex(unsigned int n)
{
	print_hbo(n, 16);
}

int main()
{
	int a = 57;
	int *p = &a;
	printf("%p\n", p);
	pr(p);
}
