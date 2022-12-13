#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 if successful
 */
int main(void)
{
long double a = 1;
long double b = 2;
int i = 0;
long double temp;
printf("%1.0Lf", a);
for (; i < 97; i++)
{
printf(", %1.0Lf", b);
temp = b;
b = a + b;
a = temp;
}
printf("\n");
return (0);
}
