#include "holberton.h"
#include<stdio.h>
/**
 * _isupper - a function that checks for uppercase character.
 * @c: is a character
 * Returns: 0
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else if (c >= 'a' && c <= 'z')
{
return (0);
}
return (0);
}
