#include "holberton.h"

/**
 *_strlen - function that returns the length
 *
 * @s: pointer to a string
 * Return: int
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i += 1;
}
return (i);
}
