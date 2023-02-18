#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "hello hi mr binyam";
	char d[] = " ";
	char *s = strtok(str, d);
	char *s2 = strtok(NULL, d);

	printf("%s", s);
	printf("%s", s2);
}