#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 if successful
 */
int main(void)
{
int i = 1;
int sum;
for (; i < 1024; i++)
{
if (i % 5 == 0 || i % 3 == 0)
sum = sum + i;
}
printf("%d", sum);
return (0);
}
