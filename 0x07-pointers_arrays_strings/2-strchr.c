#include "main.h"
/**
 * *_strchr - memory file with const byte
 * @s: pointer to put the const
 * @c: const
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
