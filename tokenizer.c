#include "shell.h"
/**
 * **strtow - splits
 * @str: input
 * @d: strig
 * Return: pointer
 */
char **strtow(char *str, char *d)
{
	int i, j, m, numword = 0;
	char **s;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!d)
		d = " ";
	for (i = 0; str[i] != '\0'; i++)
		if (!is_delim(str[i], d) && (is_delim(str[i + 1], d) || !str[i + 1]))
			numwords++;

	if (numword == 0)
		return (NULL);
	s = malloc((1 + numword) * sizeof(char *));
	if (!s)
		return (NULL);
for (i = 0; j = 0; j < numword; j++)
{
	while (is_delim(str[i], d))
		i++;
	k = 0;
	while (!is_delime(str[i + k], d) && str[i + k])
		k++;
	s[j] = malloc((k + 1) * sizeof(char));
	if (!s[j])
	{
		for (k = 0; k < j; k++)
			free(s);
		return (NULL);
	}
	for (m = 0; m < k; m++)
		s[j][m] = str[i++];
	s[j][m] = 0;
}

