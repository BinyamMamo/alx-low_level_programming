#include <unistd.h>
#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
void print(int a);
void println(int a);

int main(void)
{
	printf("%d\n", printf("a%s", ""));
	// printf("%d\n", INT_MAX);
	// println(INT_MAX);
}

void print(int a)
{
	unsigned int buffer = 0;

	if (a < 0)
	{
		if (a == INT_MIN)
			buffer = INT_MIN;
		else
			buffer = a * -1;

		putchar('-');
	}
	else
		buffer = a;

	if (buffer < 10)
	{
		putchar(a + 48);
		return;
	}
	print(buffer / 10);
	buffer = buffer % 10;
	putchar(buffer + 48);
}

void println(int a)
{
	print(a);
	putchar('\n');
}
