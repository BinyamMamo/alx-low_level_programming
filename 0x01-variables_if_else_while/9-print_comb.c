#include <stdio.h>

/*
 * main - entry point
 * Return: 0 if succesful
 */
int main(void)
{
for(int i=48; i<=57; i++)
{
 putchar((char)i); 
 if(i!=57)
 {
  putchar(','); 
  putchar(' '); 
 }
}
return (0);
}