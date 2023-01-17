#include <stdarg.h>
#include <stdio.h>
#include <string.h>

void print(int num_args, ...);
void printer(char *args, ...);
void pointer(char *args, ...);

int main(void)
{
	char *str = "%d %c %d %c %d";
	printf("%ld", strlen(str));
	pointer(str, 7, '2', 3, '4', 5);
	return (0);
}

void print(int num_args, ...)
{
	int i;
	va_list args;

	va_start(args, num_args);

	for (i = 0; i < num_args; i++)
	{
		printf("num: %d\n", va_arg(args, int));
	}

	va_end(args);
}

/* void printer(int num_args, ...)
{
	int i;
	int *int_ptr;
	char *char_ptr;
	void *ptr = &num_args;

	int_ptr = (int *)(ptr + 4);
	ptr = ptr + 8;
	printf("ADDRESS: %p VALUE: %p\n", ptr, int_ptr);
	printf("num: %d\n", *int_ptr);
	char_ptr = (char *)(ptr);
	printf("ADDRESS: %p VALUE: %p\n", ptr, char_ptr);
	printf("char: %c\n", *char_ptr);
} */

void printer(char *args, ...)
{
	int i;
	int *int_ptr;
	char *char_ptr;
	void *ptr = args;

	ptr = ptr + 14;
	int_ptr = (int *)ptr;
	printf("=>int: %d\n", *int_ptr);
	for (i = 0; args[i] != 0; i++)
	{
		// printf("Address: %p\n", ptr);
		if (args[i] == '%' && args[i + 1] == 'd')
		{
			int_ptr = (int *)ptr;
			printf("int: %d\n", *int_ptr);
			ptr = ptr + 4;
		}
		if (args[i] == '%' && args[i + 1] == 'c')
		{
			char_ptr = (char *)ptr;
			printf("char: %c\n", *char_ptr);
			ptr = ptr + 1;
		}
	}
}

void pointer(char *str, ...)
{
	int *int_pointer, i;
	void *ptr = &str;

	for (i = 0; i < 5; i++)
	{
		int_pointer = (int *)ptr;
		ptr++;
		printf("%d \n", *int_pointer);
	}
}