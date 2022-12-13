#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 if successful
 */
int main(void)
{
float a = 1;
float b = 2;
int i = 0;
float temp;
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
