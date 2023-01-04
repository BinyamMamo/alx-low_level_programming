#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 if successful
 */
int main(void)
{
double a = 1;
double b = 2;
int i = 0;
double temp;
printf("%1.0f", a);
for (; i < 49; i++)
{
printf(", %1.0f", b);
temp = b;
b = a + b;
a = temp;
}
printf("\n");
return (0);
}
