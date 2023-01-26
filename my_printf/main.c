#include <unistd.h>
#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
void print(int a);
void println(int a);

int num_len(int n)
{
	int i = 0;

	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		return (0);
	else
		return (--i);
}

/**
 * pw - opt for the pow() function in math.h lib
 * @n: the base number
 * @p: the power
 * Return: n to the power of p
 */

int pw(int n, int p)
{
	int i = 0, r = 1;
	for (; i < p; i++)
		r = r * n;
	return (r);
}

int printer(int n)
{
	unsigned int i, pow = 1;
	unsigned int len = num_len(n);
	unsigned int buffer = 0;
	unsigned int count = 0;
	char c;

	if (n < 0)
	{
		write(1, &"-", 1);
		buffer = (unsigned int)n * -1;
		count++;
	}
	else
		buffer = (unsigned int)(n);

	for (i = len; i > 0; i--)
	{
		pow = pw(10, i);

		c = (buffer / pow) + 48;
		buffer = buffer % pow;
		write(1, &c, 1);
		count++;
	}

	pow = pw(10, i);
	c = (buffer / pow) + 48;
	write(1, &c, 1);
	count++;

	return (count);
}

int main(void)
{
	//              0  1   2  3   4     5       6       7
	int sp_int[] = {0, 1, -1, 4, -4, INT_MAX, INT_MIN, -1234};
	int n = sp_int[7];
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		n = sp_int[i];
		printf(",    %d\n", printer(n));
	}
	// printf("%d\n", printf("a%s", ""));
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
