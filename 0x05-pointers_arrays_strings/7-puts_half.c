#include <stdio.h>

void puts_half(char *str);
int len(char *str);

int main(int argc, char const *argv[])
{
	printf("%s\n", "Hello world!!!");
	puts_half("0123456789");
	return 0;
}

void puts_half(char *str)
{
	int i = len(str) / 2;
	if(len(str) % 2 != 0)
		i++;

	for (; i < len(str); ++i)
	{
		putchar(str[i]);
	}
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
