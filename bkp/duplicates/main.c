#include <stdio.h>

int len(char *str);


void rev_string(char *str)
{
	int l = len(str) - 1;
	printf("%d", l);

	for (int i = 0; i <= 1; i++)
	{
		char temp = str[i];
		str[i] = str[l - i];
		str[l - i] = temp;
		printf("i: %d str[i]: %c ---- l - i: %d str[l-i]: %c temp: %c\n", i ,str[i], l-i, str[l-i], temp);
	}
}

int main(){ // ------------- main --------------
	printf("Hello world!!!\n");
	char *str = "rev";
	rev_string(str);
	puts(str);
}

/**
 * len - finds the length of a string
 * @str: a character array to store the input
 * Return: the length of str
 */ 
int len(char *s)
{
	int c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}