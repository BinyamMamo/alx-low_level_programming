#include <stdio.h>
char *rot13(char *str);
char repl(char c);

int main(void)
{
	char s[] = "rot";
	printf("Hello World!!!\n");
	printf("%s",rot13(s));
	return 0;
}

char *rot13(char *str)
{
	int i = 0;
  for (; str[i] != 0; ++i)
	{
		str[i] = repl(str[i]);
		// printf("%c\n", str[i]);
	}
	return (str);
}

char repl(char c)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i = 0;

	for (; letters[i] != 0; i++)
	{
		if (letters[i] == c)
		{
			c = rot[i];
			break;
		}
	}
	return (c);
}