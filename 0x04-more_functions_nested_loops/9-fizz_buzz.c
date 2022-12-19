#include <stdio.h>

/**
 * main - fizz buzz program
 *
 * Return: 0 if succesful.
 */

int main(void)
{
int i = 1;
for (; i <= 100; i++)
{
if (i != 1)
{
printf(" ");
}
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
}
printf("\n");
return (0);
}

