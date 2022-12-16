#include <stdio.h>
#include <math.h>



/**
 * mod - finds the modulo/remainder of two double numbers
 * @a: the first double number
 * @b: the second double number
 * Return: the modulo of the two numbers
 */

int mod(double a, double b)
{
if (a / b == round(a / b))
return (0);
return (1);
}



/**
 * cf - counts the number of factors
 * @n: the number whose factor is to be counted
 * Return: the number of factors n has
 */

int cf(double n)
{
int c = 0;
double i = 2;

for (; i <= n / 2; i++)
{
if (c > 0)
break;
if (mod(n, i) == 0)
c++;
}
return (c);
}



/**
 * factor - divides the number by its lowest prime factor
 * @n: the number to factor
 * Return: the factor of the number
 */

double factor(double n)
{
double i = 2;
for (; i <= n / 2; i++)
{
if (mod(n, i) == 0)
return (n / i);
}
return (n);
}



/**
 * main - Entry point of the program, prints the largest factor of 612852475143
 * Return: 0 always
 */

int main(void)
{
double num = 612852475143;
while (cf(num) != 0)
{
num = factor(num);
}
printf("%0.0f\n", num);
return (0);
}
