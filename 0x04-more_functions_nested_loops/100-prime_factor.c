#include <stdio.h>


/**
 * pf - find the number of factors a number has
 * @n: the number whose factor is to be calculated
 * Return: the number of factors
 */

int pf(long int n)
{
int c = 0;
long int i = 2;
for (; i < n; i++)
{

if (n % i == 0)
c++;

}
return (c);
}

/**
 * divide - divides the number by its lowest prime factor
 * @n: the number to be divided
 * Return: the quotient
 */
double divide(long int n)
{
long int i = 2;
for (; i < n; i++)
{

if (n % i == 0)
return (n / i);

}
return (n);
}


/**
 * main - find the largest prime factor
 * Return: 0 if successful
 */

int main(void)
{
double nn = 612852475143;
long int 
while (pf(n) != 0)
{
n = divide(n);
}
printf("%f\n", n);
return (0);
}
