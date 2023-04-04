#include "main.h"
/**
 * *_memcpy - copy memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsiged int n)
{
	unisigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
