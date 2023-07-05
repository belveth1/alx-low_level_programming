/**
 * _puts_recursion - a function that prints a new line
 * @s: the string
 * Return: nothing
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
printf("%c", *s);
_puts_recursion(s++);
}
else
printf("\n");
}
