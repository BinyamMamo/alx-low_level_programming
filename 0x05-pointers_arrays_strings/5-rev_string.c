#include <stdio.h>

void reverse(char *s);
int len(char *s);

int main(int argc, char const *argv[])
{
	printf("Hello world everybody\n");
	char str[] = "reverse";
	reverse(str);
	puts(str);
	return 0;
}

void reverse(char *str)
{
	for (int i = 0; i < len(str)/2; i++)
	{
		char temp = str[i];
		str[i] = str[(len(str) - 1) - i];	
		str[(len(str) - 1) - i] = temp;	
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