#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - converts string to word
 * @str: string to convert
 *
 * Return: a pointer to the converted string
 */

char **strtow(char *str)
{
int i, c, j;
char **s;

if (str == NULL || str[0] == '\0')
return (NULL);

c = 0;
j = 0;
if (str[0] != '\0' && str[0] != ' ')
c++;
while (str[j] != 0)
{
if (str[j] == ' ' && str[j + 1] != ' ' && str[j + 1] != '\0')
c++;
j++;
}

if (c == 0)
return (NULL);

s = malloc(c * sizeof(*s));

if (s == NULL)
return (NULL);
i = 0;
j = 0;
if (str[0] != '\0' && str[0] != ' ')
{
*s = &str[0];
i++;
}
while (str[j] != 0)
{
if (str[j] == ' ' && str[j + 1] != ' ' && str[j + 1] != '\0')
*(s + i) = &str[j + 1];
j++;
}

return (s);
}

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
