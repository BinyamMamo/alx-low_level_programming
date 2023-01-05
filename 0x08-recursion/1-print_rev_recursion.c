/**
* _print_rev_recursion - _print_rev_recursion
* @s: first input
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
	printf("=> %d\n", len(s));
	putchar(*(s + len(s) - 1));
	if (len(s) > 1)
		_print_rev_recursion(s + len(s) - 1);
	return;
}
