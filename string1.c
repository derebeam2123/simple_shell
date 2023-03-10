#include "shell.h"

/**
 * _strcpy - copies
 * @dest: dest
 * @src: source
 *
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/**
 * _strdup - duplicate
 * @str: string
 *
 * Return: strint
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
/**
 * _puts - print
 * @str: string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	if (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _putchar - write char
 * @c: print
 *
 * Return: 0 or 1
 */
int _putchar(char c)
{
	static int  i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
