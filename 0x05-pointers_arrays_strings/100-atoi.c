#include <stdio.h>
#include <limits.h>
int len(char *);
int pw(int,int);
/**
 * pw - finds the power of n to p
 * @n: base number
 * @p: power
 * Return: n to the power of p
 */
int pw(int n, int  p)
{
	int j = 0;
	int r = 1;
	for(; j < p; j++)
	{
		r = r * n;
	}
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
  while (str[c] != '\0')
  {
  	c++;
  }
  return (c);
}


/**
 * _atoi - parses integer from a string
 * @*str: string to be converted to integer
 * Return: the converted integer
 */
int _atoi(char *str)
{
	int i = len(str)-1;
	int num = 0;
	int k = 0;	
	for (; i >= 0; --i)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			int n = str[i]-48;
			num = num + (n * pw(10, k));
			k++;
		} else if(num != 0 && str[i] != ' ' && str[i] != '-' && str[i] != '+')
		{
			num = 0;
			k = 0;
		}
		if (str[i] == '-' && num != 0)
		{
			num = num * -1;
		}
	}
	return (num);
}