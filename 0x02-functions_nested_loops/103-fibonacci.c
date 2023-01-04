#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 if successful
 */
int main(void)
{
int a = 1;
int b = 2;
int temp;
double sum = 0;
while (b < 4000000)
{
if ((b % 2) == 0)
sum = sum + b;
temp = b;
b = a + b;
a = temp;
}
printf("%1.0f", sum);
printf("\n");
return (0);
}
