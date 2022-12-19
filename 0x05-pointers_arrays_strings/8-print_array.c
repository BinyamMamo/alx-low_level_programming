#include <stdio.h>

void print_array(int *a, int n);
int len(char *str);

int main(int argc, char const *argv[])
{
	printf("%s\n", "Hello world!!!");
	int a[5] = {3,2,4,5,2};
	print_array(a,5);
	return 0;
}

void print_array(int *a, int n)
{

	for (int i = 0; i < n; ++i)
	{
		putchar('0' + a[i]);
		if(i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

int len(char *str)
{
	int c = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		c++;
	}
	return (c);
}