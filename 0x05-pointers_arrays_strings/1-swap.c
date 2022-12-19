/**
 * swap - swaps two integers using pointers
 * @aa: a pointer to access the first integer
 * @bb: a pointer to access the second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
