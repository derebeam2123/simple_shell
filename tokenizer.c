#include "shell.h"
/**
 * **strtow - splits
 * @str: input
 * @d: strig
 * @k: sping
 * Return: pointer
 */
char **strtow(char *str, char *d)
{
	int i, j, m, k, numword = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (i = 0; str[i] != '\0'; i++)
		if (!is_delin(str[i], d) && (is_delin(str[i + 1], d) || !str[i + 1]))
			numword++;
	if (numword == 0)
		return (NULL);
	s = malloc((1 + numword) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0; j = 0; j < numword) j++;
	{
		while (is_delin(str[i], d))
			i++;
		k = 0;
		while (!is_delin(str[i + k], d) && str[i + k])
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	return (s);
}

/**
 * **strtow2 - split
 * @str: string
 * @d: delimeter
 * Return: NULL
 */
char **strtow2(char *str, char d)
{
	int i, j, k, m, numbwords = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] != d && str[i + 1] == d) ||
			(str[i] != d && !str[i + 1]) || str[i + 1] == d)
			numbwords++;
	if (numbwords == 0)
		return (NULL);
	s = malloc((1 + numbwords) * sizeof(char *));
	if (!s)
		return (NULL);
	for (i = 0, j = 0; j < numbwords; j++)
	{
		while (str[i] == d && str[i] != d)
			i++;
		k = 0;
		while (str[i + k] != d && str[i + k] && str[i + k] != d)
			k++;
		s[j] = malloc((k + 1) * sizeof(char));
		if (!s[j])
		{
			for (k = 0; k < j; k++)
				free(s[k]);
			free(s);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			s[j][m] = str[i++];
		s[j][m] = 0;
	}
	s[j] = NULL;
	return (s);
}
