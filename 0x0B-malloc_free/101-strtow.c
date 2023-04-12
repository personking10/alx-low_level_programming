#include "main.h"
/**
 * wrad - count the number
 * @s: string to count
 *
 * Return: int of number of words
 */

int wrad(char *s)
{
	int i, ni = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				ni++;
		}
		else if (i == 0)
			ni++;
	}
	ni++;
	return (ni);
}
/**
 * strtow - split a string
 * @str: string
 *
 * Return: pointer to an array
 */

char **strtow(char *str)
{
	int i, j, ka, la, na = 0, wc = 0;
	char **wa;

	if (str == NULL || *str == '\0')
		return (NULL);
	na = wrad(str);
	if (na == 1)
		return (NULL);
	wa = (char **)malloc(na * sizeof(char *));
	if (wa == NULL)
		return (NULL);
	wa[na - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			wa[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (wa[wc] == NULL)
			{
				for (ka = 0; ka < wc; ka++)
					free(wa[ka]);
				free(wa[na - 1]);
				free(wa);
				return (NULL);
			}
			for (la = 0; la < j; la++)
				wa[wc][la] = str[i + la];
			wa[wc][la] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (wa);
}
