#include "main.h"

/**
 * _islower - checks if a letter is lowercase or not
 * @c: the ASCII code of the character to be checked
 * Return: 1 if the letter is in lowercase
 * and 0 if the letter is not in lowercase
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
