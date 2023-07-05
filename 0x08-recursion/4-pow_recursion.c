/**
 * _pow_recursion - a function that returns the power of @x by @y x^y
  * @x: integer x
 * @y: integer y
 * Return: the power of @x by @y
*/
int _pow_recursion(int x, int y)
{
int z;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y % 2 == 0)
{
z = _pow_recursion(x, y / 2);
return (z *z);
}
else
return (x *  _pow_recursion(x, y - 1));
}
