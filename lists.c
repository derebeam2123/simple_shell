#include "shell.h"

/**
 * add_node - add node
 * @head: head
 * @str: sring
 * @num: number
 *
 * Return: 0 or 1
 */
lsit_t *add_node(list_t **head, const char *str, int num)
{
	list_t *new_head;

	if (!head)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (new_head)
		return (NULL);
	
