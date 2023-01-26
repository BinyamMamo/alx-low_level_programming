#include <unistd.h>
#include <stdio.h>
#include <math.h>
void print(char c)
{
	write(1, &c, 1);
}
int num_len(double n)
{
	int i = 0;

	if (n < 0)
		n *= -1;

	while (!(n < 1))
	{
		n = floor(n / 10.0);
		i++;
	}
	if (i == 0)
		return (0);
	else
		return (--i);
}

int printer(double n)
{
	int i, len = num_len(n), count = 0;
	double pw = 1;
	char c;

	if (n < 0)
	{
		write(1, &"-", 1);
		n = n * -1;
		count++;
	}

	for (i = len; i >= 0; i--)
	{
		pw = pow(10, i);

		c = (int)(n / pw) + 48;
		n = (n / pw) - floor(n / pw);
		n *= pw;
		write(1, &c, 1);
		count++;
	}
	write(1, &".", 1);
	printf("\n$ %f \n", n);

	i = 0;
	while (n != 0.0)
	{
		c = (int)(n * 10) + 48;
		printf("$ %f  %f ", n * 10.0, floor(n * 10.0));
		n = (n * 10.0) - floor(n * 10.0);
		printf(" %f\n", n);
		write(1, &c, 1);
		count++;
	}
	return (count);
}

int pf(double f)
{
	double a = floor(f);
	double b = f - a;
	printf("%f %f %f\n", a, b, f);
	return floor(a);
}

int main(void)
{
	printf(" => %d\n", printer(12.34));
	printf("Hello\n");
}