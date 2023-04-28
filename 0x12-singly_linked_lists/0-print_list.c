#include "lists.h"
#include <stddef.h>

#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list_t list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		print_node(h);
		h = h->next;
		count++;
	}

	return (count);
}

/**
 * print_node - prints a single node of a list_t list
 * @node: pointer to node to be printed
 */
void print_node(const list_t *node)
{
	if (node->str == NULL)
		print_null_node();
	else
		print_regular_node(node);
}

/**
 * print_regular_node - prints a regular node of a list_t list
 * @node: pointer to regular node to be printed
 */
void print_regular_node(const list_t *node)
{
	unsigned int j, i, len = node->len;
	char str_len[10];

	/* Convert the length to a string */
	i = 0;
	while (len > 0)
	{
		str_len[i++] = (len % 10) + '0';
		len /= 10;
	}
	str_len[i] = '\0';

	/* Reverse the string */
	j = 0;
	i--;
	while (j < i)
	{
		char tmp = str_len[j];

		str_len[j] = str_len[i];
		str_len[i] = tmp;
		j++;
		i--;
	}

	/* Print the node's data */
	_putchar('[');
	for (i = 0; str_len[i] != '\0'; i++)
		_putchar(str_len[i]);
	_putchar(']');
	_putchar(' ');

	for (i = 0; i < node->len; i++)
		_putchar(node->str[i]);
	_putchar('\n');
}

#include "lists.h"

/**
 * print_null_node - prints a null node of a list_t list
 */
void print_null_node(void)
{
	_putchar('[');
	_putchar('0');
	_putchar(']');
	_putchar(' ');
	print_null_data();
	_putchar('\n');
}

/**
 * print_null_data - prints the data for a null node of a list_t list
 */
void print_null_data(void)
{
	_putchar('(');
	_putchar('n');
	_putchar('i');
	_putchar('l');
	_putchar(')');
}
