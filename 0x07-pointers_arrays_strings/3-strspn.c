#include "main.h"

/**
 * _strpsn - get length of prefix substring
 *
 * @s: string
 * @accept: bytes
 * Return: unsigned int
 */

unsigned int _strpsn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (x);
}
