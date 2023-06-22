/**
*_isdigit - checks for digit 0 to 9
*@c: The variable to check
*Return: 1 for digit 0 for otherwise.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
