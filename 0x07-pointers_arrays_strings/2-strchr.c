#include "holberton.h"
#include <string.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: where s is a string
 * @c: character on the first occurence
 * Returns: a pointer
*/
char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (0);
}