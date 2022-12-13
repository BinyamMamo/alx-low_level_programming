#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 if successful
 */
int main(void)
{
int a = 1;
int b = 2;
int i = 0;
int temp;
printf("%d", a);
for (; i < 49; i++)
{
printf(", %d", b);
temp = b;
b = a + b;
a = temp;
}
printf("\n");
return (0);
}
