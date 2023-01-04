#include "main.h"
#include <stdio.h>

/**
* print_chessboard - print_chessboard
* @a: first input
*
* Return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	for (; i < 8; i++)
	{
		j = 0;
		for (; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
