#include <stdio.h>

int len(char *str);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void rev_string(char *str);

int main(int argcac, char const *argv[])
{
	char s[10];
	char n1[] = "134576225";
	char n2[] = "213454";
	infinite_add(n1,n2,s,2);
	printf("Hello world\n");	
	return 0;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int a, b, rem, sum;
	a = b = rem = sum = 0;
	rev_string(n1);
	rev_string(n2);
	int largest = (len(n 1) > len(n2))? len(n1): len(n2);
	char str[largest + 2];

	while (!(i >= len(n1) && i >= len(n2)))
	{
		
		if(i >= len(n1))
			a = 0;
		else
			a = n1[i] - 48;
		
		if(i >= len(n2))
			b = 0;
		else
			b = n2[i] - 48;
		
		sum = (a + b + rem) % 10;
		rem = (a + b + rem) / 10;
		str[i] = sum + 48;

		printf("a: %d b: %d sum: %d rem: %d str[%d]: %d len: %d\n", a, b , sum ,rem, i, str[i], len(n1));
		i++;
	}
	str[i] = 0;
	if(len(str) > size_r)
		printf("ERROR: 0\n");
	rev_string(str);
	printf("sum: %s\n", str);
	return (r);
}

/**
 * len - finds the length of string
 * @str: a character array to store the input
 * Return: the length of str
 */

int len(char *str)
{
	int c = 0;
	int i = 0;

	for (; str[i] != '\0'; ++i)
	{
		c++;
	}
	return (c);
}

/**
 * rev_string - access the string through the pointer and reverse it
 * @str: the address of the string to reverse
 * Return: nothing
 */
void rev_string(char *str)
{
	int i = 0;

	for (; i < len(str) / 2; i++)
	{
		char temp = str[i];

		str[i] = str[(len(str) - 1) - i];
		str[(len(str) - 1) - i] = temp;
	}
}
