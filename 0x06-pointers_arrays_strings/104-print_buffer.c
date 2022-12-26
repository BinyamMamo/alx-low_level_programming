#include <stdio.h>

void print_buffer(char *b, int size);

int main(void)
{
	char buffer[] = "This is a string!";
	printf("%s\n", buffer);
	printf("---------------------------------\n");
	print_buffer(buffer, sizeof(buffer));
	return (0);
}
void print_buffer(char *b, int size)
{
	int i = 0;

	while (i < size - 1)
	{
		int j, k;

		printf("%p ", &b[i + j]);

		j = 0;
		k = 0;
		for (; j < 10; ++j)
		{
			if (k == 2)
			{
				printf(" ");
				k = 0;
			}
			else
				k++;
			if (b[i + j] == 0)
				break;
			printf("%x", (int)b[i + j]);
		}

		printf(" ");
		j = 0;
		for (; j < 10; ++j)
		{
			if (b[i + j] == 0)
				break;
			printf("%c", b[i + j]);
		}

		i = i + j;
		printf("\n");
	}
}