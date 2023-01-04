/**
 * set_string - string set
 * @s: pointerpointed
 * @to: pointer
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
int i;

i = 0;
while (to[i])
{
s[i] = &to[i];
i++;
}
s[i] = &to[i];
}
