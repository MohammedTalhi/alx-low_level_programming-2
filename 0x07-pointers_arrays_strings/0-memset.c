#include "main.h"

/**
 * _memset - fill a block of memory with a specific byte
 * @s: pointer to be filled
 * @b: constant value
 * @n: number of byteunis to be changed
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
        }

	return (s);
}
