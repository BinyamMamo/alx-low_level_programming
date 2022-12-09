#include <stdio.h>

/*
 * main - entry point
 * Return: 0 if succesful
 */
int main(void)
{
for(int i=48; i<=57; i++)
 putchar((char)i); 
for(int i=(int)'a'; i<=(int)'f'; i++)
 putchar((char)i); 
putchar('\n');
return (0);
}
