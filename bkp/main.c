#include <stdio.h>
#include <un>
int main(int argc, char const *argv[])
{
	int i;
	for(i = 0; i <=9; i++)
	{
		putchar('0'+i);
		if(i<9)
		{
			putchar(',');
			putchar(' ');
		}



	}

	return 0;
}