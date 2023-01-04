#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic or not
 * @c: the ASCII code of the character to be checked
 * Return: 1 if the character is alphabetic
 * and 0 if the character is not
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
return (0);
}
