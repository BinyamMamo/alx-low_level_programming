#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: nothing
 */
int main(void)
{
	int a = 3, b = 4;
	swap(&a, &b);
	return (0);

}

/**
 * swap - swaps two integers using pointers
 * @aa: a pointer to access the first integer 
 * @bb: a pointer to access the second integer
 * Return: nothing
 */  
void swap(int *aa, int *bb)
{
	int temp = *aa;
	*aa = *bb;
	*bb = temp;
}