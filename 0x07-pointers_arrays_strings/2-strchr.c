#include "main.h"
/**
 * _strchr - Entry constatnt byte to memory
 * @s: input pointer
 * @c: input constant
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
