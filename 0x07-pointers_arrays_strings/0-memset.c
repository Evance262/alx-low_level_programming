#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_memset - function fills the first n bytes of the
 *@s:  A pointer to the memory area to be filled.
 *@b: The character to fill the memory area with.
 *@n: The number of bytes to be filled.
 *
 *Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
*s = n;
memset(s, b, n);
return (s);
}
