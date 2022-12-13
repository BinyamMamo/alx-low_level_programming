#include<stdio.h>
#include<string.h>
#include "alx.h"

void pw(int);
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: the starting number
 * Return: void
 */

void main(void)
{
pw(95451);
}

void pw(int n)
{
int x = 10;
char numstr[x];
sprintf(numstr, "%d", n);
int numlen = strlen(numstr);
printf("%d\n", numlen);
}

void print_to_98(int n)
{
int x;
if (n > 98)
x = -1;
if (n < 98)
x = 1;
while(n < 98 || n > 98)
{

if(n < 10)
putchar('0' + n);

if(n >= 10 && n < 100)
{
putchar('0' + (n / 10));
putchar('0' + (n % 10));
}

if(n >= 100)
{
putchar('0' + (n / 100));
putchar('0' + ((n / 10) - ((n / 100) * 10)));
putchar('0' + (n % 10));
}

putchar(',');
putchar(' ');
n+=x;
} // end loop
putchar('9');
putchar('8');
putchar('\n');
} //end function
