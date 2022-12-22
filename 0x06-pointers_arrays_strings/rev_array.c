#include <stdio.h>
void reverse_array(int *a, int n);

void reverse_array(int *a, int n)
{
	int i = 0;
	printf("======>   n : %d     and      n/2: %d\n", n, n / 2);
	for (; i < n / 2; ++i)
	{
		int temp = a[i];
		printf("BEFORE: a[%d] : %d and a[%d]: %d\n", i, a[i], n - 1 - i, a[n - 1 - i]);
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		printf("a[%d] : %d and a[%d]: %d\n", i, a[i], n - 1 - i, a[n - 1 - i]);
	}
}