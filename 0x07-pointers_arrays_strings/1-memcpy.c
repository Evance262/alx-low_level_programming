#include "holberton.h"
#include <string.h>
/**
 *_memcpy - function copies n bytes from memory
 *area src to memory area dest
 *@dest: pointer to destination char
 *@src: pointer to source char
 *@n: The number of bytes to be filled.
 *
 *Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
*dest = n;
memcpy(dest, src, n);
return (dest);
}
