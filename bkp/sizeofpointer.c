#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", "Hello world!!!");
	printf("----------------------------------------------------------------------------\n");
	printf("%s\n", "Size of data types and their pointers for 64 bits architecture");
	printf("----------------------------------------------------------------------------\n");
	printf("----------------------------------------------------------------------------\n");

	printf("Size of char: %ld ----- size of char pointer: %ld\n", sizeof(char), sizeof(char*));
	printf("Size of int: %ld ----- size of int pointer: %ld\n", sizeof(int), sizeof(int*));
	printf("Size of float: %ld ----- size of float pointer: %ld\n", sizeof(float), sizeof(float*));
	printf("Size of double: %ld ----- size of double pointer: %ld\n", sizeof(double), sizeof(double*));
	printf("Size of long double: %ld ----- size of long double pointer: %ld\n", sizeof(long double), sizeof(long double*));

	printf("----------------------------------------------------------------------------\n");
	printf("-    Conclusion: size of pointer is always 8 bytes for 64 bits device      -\n");
	printf("----------------------------------------------------------------------------\n");
	return 0;
}