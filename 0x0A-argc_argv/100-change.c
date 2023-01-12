#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if succesfull and 1 if not
 */
int main(int argc, char *argv[])
{
	int i = 0, num = 0, j = 0, c = 0, sum = 0;
	int coins[5] = {1,2,5,10,25};

	if (argc != 2)
	{
		puts("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num <= 0)
		puts("0\n");

	for (; i < 5; i++)
	{
		if (coins[i] >= num)
			break;
	}

	i--;
	j = i;
	while (j > 0)
	{
		if (sum + coins[j] > num)
		{
			j--;
			continue;
		}

		sum = sum + coins[j];
		c++;

		if (sum == num)
			break;
	}

	printf("%d\n", c);
	return (0);
}
