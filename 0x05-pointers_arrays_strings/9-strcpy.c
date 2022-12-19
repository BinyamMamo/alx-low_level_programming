#include <stdio.h>

char *_strcpy(char *dest, char *src);
int len(char *str);

int main(int argc, char const *argv[])
{
	printf("%s\n", "Hello world!!!");
	char str[98] = "hiw";
	_strcpy(str,"HHI");
	return 0;
}

char *_strcpy(char *dest, char *src)
{
	for (int i = 0; i < len(src); ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
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