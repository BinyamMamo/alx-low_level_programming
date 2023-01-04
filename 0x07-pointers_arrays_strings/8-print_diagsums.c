/**
 * print_diagsums - print_diagsums
 * @a: first input
 * @size: second input
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;
	
	i = 0;
	sum = 0;
	for (; i < size; i++)
	{
		j = 0;

		for (; j < size; j++)
		{
			if (i == j)
			{
				sum += *(a + (i * size + j));
				break;
			}
		}
	}
	printf("%d, ", sum);
	
	i = 0;
	sum = 0;
	for (; i < size; i++)
	{
		j = 0;
		
		for (; j < size; j++)
		{
			if (i + j == size - 1)
			{
				sum += *(a + (i * size + j));
				break;
			}
		}
	}
	printf("%d\n", sum);
}
