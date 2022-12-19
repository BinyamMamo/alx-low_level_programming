#include <stdio.h>

void puts2(char *str);
int len(char *str);

int main(int argc, char const *argv[])
{
	printf("%s\n", "Hello world!!!");
	puts2("0123456789");
	return 0;
}

void puts2(char *str)
{
	for (int i = 0; i < len(str); ++i)
	{
		if(i % 2 == 0)
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