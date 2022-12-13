#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 if successful
 */
int main(void)
{
long long int a = 1;
long long int b = 2;
int i = 0;
long long int temp;
printf("%d", a);
for (; i < 49; i++)
{
printf(", %lld", b);
temp = b;
b = a + b;
a = temp;
}
printf("\n");
return (0);
}
