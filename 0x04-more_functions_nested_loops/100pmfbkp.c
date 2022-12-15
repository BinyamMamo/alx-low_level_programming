#include <stdio.h>

/**
 * main - find the largest prime factor
 * Return: 0 if successful
 */

int pf(int n)
{
int c = 0;
if(n % 7 == 0 && n != 7)
c = c + 1;
if(n % 5 == 0 && n != 5)
c = c + 1;
if(n % 3 == 0 && n != 3)
c = c + 1;
if(n % 2 == 0 && n != 2)
c = c + 1;
return c;
}

int divide(int n)
{
if(n % 2 == 0 && n != 2)
return n / 2;
if(n % 3 == 0 && n != 3)
return n / 3;
if(n % 5 == 0 && n != 5)
return n / 5;
if(n % 7 == 0 && n != 7)
return n / 7;
return n;
}

int main(void)
{
int n = 1231952;
while(pf(n) != 0)
{
printf("divided by: %d \n", n/divide(n));
n = divide(n);
printf("and got: %d \n", n);
}
printf("\n%d",n);
return (0);
}
