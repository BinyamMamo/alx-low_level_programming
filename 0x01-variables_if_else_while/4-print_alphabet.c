#include <stdio.h>

/*
 * main - entry point
 * Return: 0 if succesful
 */
int main(void)
{
for(int i=97; i<=122; i++)
 if(i!=(int)'e' && i!=(int)'q')
  putchar((char)i); 
putchar('\n');
return (0);
}
