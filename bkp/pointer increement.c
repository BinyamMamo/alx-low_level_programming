#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", "Hello world!!!");
	int n = 98;
	int nn = 89;
	int *p = &n;

	printf("%d\n", *p);
	printf("%d\n", n);
	*p++;
	printf("%d\n", *p);
	printf("%d\n", n);
	return 0;
}

/*
Conclusion: *p++ === *(p++) ---- increments the address
						(*p)++ ------------- increments the pointed value
*/