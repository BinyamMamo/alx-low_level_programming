/**
 * swap_int - swaps two integers using pointers
 * @a: a pointer to access the first integer
 * @b: a pointer to access the second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
